#include "motorState.h"
#include "timers.h"
#define PWM_MAX_DUTY 50  
#define PWM_MIN_DUTY 80  
#define bottomThreshhold 10

uint16_t currentDutyCycle = PWM_MIN_DUTY;
uint16_t stepSize = 10;  
uint16_t stepSizeC = 25;  
uint16_t topSpeed = 50;
float dutyAccumulator = PWM_MIN_DUTY; // Start at the initial duty cycle

void motorOpen() {
    // Wake up the DRV8245 and enable driver
    nsleep_drv_SetHigh();  
    drvoff_drv_SetLow();  
    drv_PH_SetHigh();  

//    if (motorDelayTimer.flag) {
////        // If below threshold, jump to it before ramping
////        if (currentDutyCycle < bottomThreshhold) {
////            dutyAccumulator = bottomThreshhold;
////            currentDutyCycle = (uint16_t) dutyAccumulator;
////        }
//
//        // Ramp up to top speed
//        if (currentDutyCycle < topSpeed) {
//            dutyAccumulator += stepSize; 
//
//            if (dutyAccumulator > topSpeed) {
//                dutyAccumulator = topSpeed;
//            }
//
//            // Update current duty cycle and apply it to PWM
//            currentDutyCycle = (uint16_t) dutyAccumulator;
//            
//
//            // Reset delay timer
//            motorDelayTimer.timer = 0;
//        }
//    }
       currentDutyCycle =400;
          dutyAccumulator=400;
    PWM6_LoadDutyValue(400);
}

void motorClose() {
    nsleep_drv_SetHigh(); // Wake up DRV8245
    drvoff_drv_SetLow(); // Ensure driver is enabled
    drv_PH_SetLow(); // Set motor direction to Reverse (or as needed)

    // Ensure dutyAccumulator is initialized properly before starting
//
//     if (motorDelayTimer.flag) {
//        // If below threshold, jump to it before ramping
//        if (currentDutyCycle < bottomThreshhold) {
//            dutyAccumulator = bottomThreshhold;
//            currentDutyCycle = (uint16_t) dutyAccumulator;
//        }
//
//        // Ramp up to top speed
//        if (currentDutyCycle < topSpeed) {
//            dutyAccumulator += stepSize; 
//
//            if (dutyAccumulator > topSpeed) {
//                dutyAccumulator = topSpeed;
//            }
//
//            // Update current duty cycle and apply it to PWM
//            currentDutyCycle = (uint16_t) dutyAccumulator;
//            PWM6_LoadDutyValue(currentDutyCycle);
//
//            // Reset delay timer
//            motorDelayTimer.timer = 0;
//        }
//    }
    currentDutyCycle =400;
    dutyAccumulator=400;
    PWM6_LoadDutyValue(400);
}

void motorStop() {
    // Store fractional reductions

    // Ensure the duty cycle is above the minimum before decreasing
    if (currentDutyCycle > PWM_MIN_DUTY) {
        if (motorDelayTimerC.flag) {
            dutyAccumulator -= stepSizeC; // Reduce by stepSizeC

            if (dutyAccumulator < PWM_MIN_DUTY) {
                dutyAccumulator = PWM_MIN_DUTY;
            }

            currentDutyCycle = (uint16_t) dutyAccumulator; // Convert to integer for PWM
            dutyAccumulator = currentDutyCycle;
            PWM6_LoadDutyValue(currentDutyCycle);

            // Reset the delay timer
            motorDelayTimerC.timer = 0;
        }
    } else {
        // Ensure the motor driver is disabled when fully stopped
        drvoff_drv_SetHigh();
        PWM6_LoadDutyValue(0);
        dutyAccumulator = 0;
    }
}