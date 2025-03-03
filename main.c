/*

 */
#include "mcc_generated_files/system/system.h"
#include "inputs.h"
#include "ledControl.h"
#include "rockoStateMachine.h"
#include "timers.h"
#include "safety.h"
#include "mcc_generated_files/pwm/pwm6.h"

// test Commit

/*
    Main application
 */



#define AIPROPI 6150.0  // Current mirror scaling factor
#define RIPROPI 2200.0  // Resistor value in ohms
#define ADC_REF_VOLTAGE 5.0  // ADC reference voltage
#define ADC_RESOLUTION 1024.0  // ADC resolution for 10-bit ADC

// Function to convert ADC reading to current in Amps
float getCurrentDrawn(int adcValue) {
    float vIPROPI = (adcValue / ADC_RESOLUTION) * ADC_REF_VOLTAGE;  // Convert ADC value to voltage
    float iIPROPI = vIPROPI / RIPROPI;  // Calculate IIPROPI (current mirror output)
    float motorCurrent = iIPROPI * AIPROPI;  // Calculate actual motor current
    return motorCurrent;  // Return current in Amps
}


void cycle_nsleep(void) {
    // Set nSLEEP high to wake up the device 
    drvoff_drv_SetHigh(); // Disable driver (optional)
    nsleep_drv_SetLow();   // Set nSLEEP lown
   
    __delay_us(50);        // Hold for at least 10 microseconds for wake-up
    
    // Set nSLEEP low to reset the wake-up process
    nsleep_drv_SetHigh();  // Set nSLEEP high
    __delay_ms(10);         // Hold low for 1 millisecond (or as needed)
   
}

#define SAMPLES 10  // Number of ADC samples to average

int getAverageMotorCurrent() {
    int sum = 0;
    
    for (int i = 0; i < SAMPLES; i++) {
        sum += ADC_ChannelSelectAndConvert(IPROPI_DRV);  // Read ADC value
    }
    
    return sum / SAMPLES;  // Return the averaged ADC value
}
#define SENSOR1_BIT  (PORTBbits.RB2)
#define SENSOR2_BIT  (PORTBbits.RB3)
// Define the global counter variable
volatile int encoderCount = 0;

// The previous state for the sensors
static uint8_t lastState = 0;

void checkHallSensors(void) {
    // Read the current state of the Hall sensors
    uint8_t newState = (SENSOR1_BIT << 1) | SENSOR2_BIT;

    // Direction logic based on the states of both sensors
    if ((lastState == 0b00 && newState == 0b01) || 
        (lastState == 0b01 && newState == 0b11) || 
        (lastState == 0b11 && newState == 0b10) || 
        (lastState == 0b10 && newState == 0b00)) {
        encoderCount++;  // Forward rotation
    } 
    else if ((lastState == 0b00 && newState == 0b10) || 
             (lastState == 0b10 && newState == 0b11) || 
             (lastState == 0b11 && newState == 0b01) || 
             (lastState == 0b01 && newState == 0b00)) {
        encoderCount--;  // Reverse rotation
    }

    // Update lastState with the new state
    lastState = newState;
}

int main(void) {
    SYSTEM_Initialize();

 cycle_nsleep();
  cycle_nsleep();

    while (1) {

       //  hall1 = hallSensor1_GetValue()  ;
        // hall2 = hallSensor2_GetValue()  ;
//        Motor_Start(50,1);
//        motorCurrent =getAverageMotorCurrent();
        timers();
//        timerInterruptHandler();
        inputs();
        ledControl();
     checkHallSensors();
      //  hornToggle();
        closeSafety_check();
        openSafety_check();
        rockoStateMachine();
     
    }
}