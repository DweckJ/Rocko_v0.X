/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.1.1
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../pins.h"

void (*hallSensor1_InterruptHandler)(void);
void (*hallSensor2_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;
    LATB = 0x0;
    LATC = 0x0;
    LATD = 0x0;
    LATE = 0x0;
    LATF = 0x0;
    LATG = 0x0;
    LATH = 0x0;
    /**
    ODx registers
    */
    ODCONA = 0x0;
    ODCONB = 0x0;
    ODCONC = 0x0;
    ODCOND = 0x0;
    ODCONE = 0x0;
    ODCONF = 0x0;
    ODCONG = 0x0;
    ODCONH = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0x77;
    TRISB = 0xCB;
    TRISC = 0xFE;
    TRISD = 0xCF;
    TRISE = 0x9D;
    TRISF = 0xFC;
    TRISG = 0xDF;
    TRISH = 0xC;

    /**
    ANSELx registers
    */
    ANSELA = 0x36;
    ANSELB = 0xC0;
    ANSELD = 0x4F;
    ANSELE = 0x8D;
    ANSELF = 0xFC;
    ANSELG = 0x9E;

    /**
    WPUx registers
    */
    WPUA = 0x0;
    WPUB = 0x0;
    WPUC = 0x0;
    WPUD = 0x0;
    WPUE = 0x0;
    WPUF = 0x0;
    WPUG = 0x0;
    WPUH = 0x0;


    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    SLRCOND = 0xFF;
    SLRCONE = 0xFF;
    SLRCONF = 0xFF;
    SLRCONG = 0xDF;
    SLRCONH = 0xF;

    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLD = 0xFF;
    INLVLE = 0xFF;
    INLVLF = 0xFF;
    INLVLG = 0xFF;
    INLVLH = 0xF;

   /**
    RxyI2C | RxyFEAT registers   
    */
    /**
    PPS registers
    */
    T8INPPS = 0x0; //RA0->TMR8:T8IN;
    T6INPPS = 0x11; //RC1->TMR6:T6IN;
    T4INPPS = 0x24; //RE4->TMR4:T4IN;
    RB2PPS = 0x1D;  //RB2->TMR0:TMR0;
    RE6PPS = 0x0A;  //RE6->PWM6:PWM6;

   /**
    IOCx registers 
    */
    IOCBP = 0xC;
    IOCBN = 0xC;
    IOCBF = 0x0;
    IOCCP = 0x0;
    IOCCN = 0x0;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;
    IOCGP = 0x0;
    IOCGN = 0x0;
    IOCGF = 0x0;

    hallSensor1_SetInterruptHandler(hallSensor1_DefaultInterruptHandler);
    hallSensor2_SetInterruptHandler(hallSensor2_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin hallSensor1
    if(IOCBFbits.IOCBF2 == 1)
    {
        hallSensor1_ISR();  
    }
    // interrupt on change for pin hallSensor2
    if(IOCBFbits.IOCBF3 == 1)
    {
        hallSensor2_ISR();  
    }
}
   
/**
   hallSensor1 Interrupt Service Routine
*/
void hallSensor1_ISR(void) {

    // Add custom hallSensor1 code

    // Call the interrupt handler for the callback registered at runtime
    if(hallSensor1_InterruptHandler)
    {
        hallSensor1_InterruptHandler();
    }
    IOCBFbits.IOCBF2 = 0;
}

/**
  Allows selecting an interrupt handler for hallSensor1 at application runtime
*/
void hallSensor1_SetInterruptHandler(void (* InterruptHandler)(void)){
    hallSensor1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for hallSensor1
*/
void hallSensor1_DefaultInterruptHandler(void){
    // add your hallSensor1 interrupt custom code
    // or set custom function using hallSensor1_SetInterruptHandler()
}
   
/**
   hallSensor2 Interrupt Service Routine
*/
void hallSensor2_ISR(void) {

    // Add custom hallSensor2 code

    // Call the interrupt handler for the callback registered at runtime
    if(hallSensor2_InterruptHandler)
    {
        hallSensor2_InterruptHandler();
    }
    IOCBFbits.IOCBF3 = 0;
}

/**
  Allows selecting an interrupt handler for hallSensor2 at application runtime
*/
void hallSensor2_SetInterruptHandler(void (* InterruptHandler)(void)){
    hallSensor2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for hallSensor2
*/
void hallSensor2_DefaultInterruptHandler(void){
    // add your hallSensor2 interrupt custom code
    // or set custom function using hallSensor2_SetInterruptHandler()
}
/**
 End of File
*/