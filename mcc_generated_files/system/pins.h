/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define safety2_pulse_TRIS                 TRISAbits.TRISA0
#define safety2_pulse_LAT                  LATAbits.LATA0
#define safety2_pulse_PORT                 PORTAbits.RA0
#define safety2_pulse_WPU                  WPUAbits.WPUA0
#define safety2_pulse_OD                   ODCONAbits.ODCA0
#define safety2_pulse_ANS                  ANSELAbits.ANSELA0
#define safety2_pulse_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define safety2_pulse_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define safety2_pulse_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define safety2_pulse_GetValue()           PORTAbits.RA0
#define safety2_pulse_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define safety2_pulse_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define safety2_pulse_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define safety2_pulse_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define safety2_pulse_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define safety2_pulse_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define safety2_pulse_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define safety2_pulse_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA2 aliases
#define safety4_res_TRIS                 TRISAbits.TRISA2
#define safety4_res_LAT                  LATAbits.LATA2
#define safety4_res_PORT                 PORTAbits.RA2
#define safety4_res_WPU                  WPUAbits.WPUA2
#define safety4_res_OD                   ODCONAbits.ODCA2
#define safety4_res_ANS                  ANSELAbits.ANSELA2
#define safety4_res_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define safety4_res_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define safety4_res_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define safety4_res_GetValue()           PORTAbits.RA2
#define safety4_res_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define safety4_res_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define safety4_res_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define safety4_res_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define safety4_res_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define safety4_res_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define safety4_res_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define safety4_res_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA3 aliases
#define safety3_tst_TRIS                 TRISAbits.TRISA3
#define safety3_tst_LAT                  LATAbits.LATA3
#define safety3_tst_PORT                 PORTAbits.RA3
#define safety3_tst_WPU                  WPUAbits.WPUA3
#define safety3_tst_OD                   ODCONAbits.ODCA3
#define safety3_tst_ANS                  ANSELAbits.ANSELA3
#define safety3_tst_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define safety3_tst_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define safety3_tst_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define safety3_tst_GetValue()           PORTAbits.RA3
#define safety3_tst_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define safety3_tst_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define safety3_tst_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define safety3_tst_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define safety3_tst_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define safety3_tst_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define safety3_tst_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define safety3_tst_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set RA4 aliases
#define safety1_res_TRIS                 TRISAbits.TRISA4
#define safety1_res_LAT                  LATAbits.LATA4
#define safety1_res_PORT                 PORTAbits.RA4
#define safety1_res_WPU                  WPUAbits.WPUA4
#define safety1_res_OD                   ODCONAbits.ODCA4
#define safety1_res_ANS                  ANSELAbits.ANSELA4
#define safety1_res_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define safety1_res_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define safety1_res_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define safety1_res_GetValue()           PORTAbits.RA4
#define safety1_res_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define safety1_res_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define safety1_res_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define safety1_res_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define safety1_res_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define safety1_res_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define safety1_res_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define safety1_res_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 aliases
#define safety2_res_TRIS                 TRISAbits.TRISA5
#define safety2_res_LAT                  LATAbits.LATA5
#define safety2_res_PORT                 PORTAbits.RA5
#define safety2_res_WPU                  WPUAbits.WPUA5
#define safety2_res_OD                   ODCONAbits.ODCA5
#define safety2_res_ANS                  ANSELAbits.ANSELA5
#define safety2_res_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define safety2_res_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define safety2_res_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define safety2_res_GetValue()           PORTAbits.RA5
#define safety2_res_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define safety2_res_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define safety2_res_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define safety2_res_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define safety2_res_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define safety2_res_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define safety2_res_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define safety2_res_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA6 aliases
#define stopPB_TRIS                 TRISAbits.TRISA6
#define stopPB_LAT                  LATAbits.LATA6
#define stopPB_PORT                 PORTAbits.RA6
#define stopPB_WPU                  WPUAbits.WPUA6
#define stopPB_OD                   ODCONAbits.ODCA6
#define stopPB_ANS                  ANSELAbits.ANSELA6
#define stopPB_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define stopPB_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define stopPB_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define stopPB_GetValue()           PORTAbits.RA6
#define stopPB_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define stopPB_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define stopPB_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define stopPB_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define stopPB_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define stopPB_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define stopPB_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define stopPB_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 aliases
#define stop_led_TRIS                 TRISAbits.TRISA7
#define stop_led_LAT                  LATAbits.LATA7
#define stop_led_PORT                 PORTAbits.RA7
#define stop_led_WPU                  WPUAbits.WPUA7
#define stop_led_OD                   ODCONAbits.ODCA7
#define stop_led_ANS                  ANSELAbits.ANSELA7
#define stop_led_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define stop_led_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define stop_led_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define stop_led_GetValue()           PORTAbits.RA7
#define stop_led_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define stop_led_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define stop_led_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define stop_led_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define stop_led_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define stop_led_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define stop_led_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define stop_led_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB0 aliases
#define closeLim_TRIS                 TRISBbits.TRISB0
#define closeLim_LAT                  LATBbits.LATB0
#define closeLim_PORT                 PORTBbits.RB0
#define closeLim_WPU                  WPUBbits.WPUB0
#define closeLim_OD                   ODCONBbits.ODCB0
#define closeLim_ANS                  ANSELBbits.ANSELB0
#define closeLim_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define closeLim_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define closeLim_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define closeLim_GetValue()           PORTBbits.RB0
#define closeLim_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define closeLim_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define closeLim_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define closeLim_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define closeLim_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define closeLim_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define closeLim_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define closeLim_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 aliases
#define openLim_TRIS                 TRISBbits.TRISB1
#define openLim_LAT                  LATBbits.LATB1
#define openLim_PORT                 PORTBbits.RB1
#define openLim_WPU                  WPUBbits.WPUB1
#define openLim_OD                   ODCONBbits.ODCB1
#define openLim_ANS                  ANSELBbits.ANSELB1
#define openLim_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define openLim_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define openLim_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define openLim_GetValue()           PORTBbits.RB1
#define openLim_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define openLim_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define openLim_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define openLim_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define openLim_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define openLim_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define openLim_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define openLim_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 aliases
#define hallSensor1_TRIS                 TRISBbits.TRISB2
#define hallSensor1_LAT                  LATBbits.LATB2
#define hallSensor1_PORT                 PORTBbits.RB2
#define hallSensor1_WPU                  WPUBbits.WPUB2
#define hallSensor1_OD                   ODCONBbits.ODCB2
#define hallSensor1_ANS                  ANSELBbits.ANSELB2
#define hallSensor1_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define hallSensor1_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define hallSensor1_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define hallSensor1_GetValue()           PORTBbits.RB2
#define hallSensor1_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define hallSensor1_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define hallSensor1_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define hallSensor1_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define hallSensor1_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define hallSensor1_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define hallSensor1_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define hallSensor1_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)
#define RB2_SetInterruptHandler  hallSensor1_SetInterruptHandler

// get/set RB3 aliases
#define hallSensor2_TRIS                 TRISBbits.TRISB3
#define hallSensor2_LAT                  LATBbits.LATB3
#define hallSensor2_PORT                 PORTBbits.RB3
#define hallSensor2_WPU                  WPUBbits.WPUB3
#define hallSensor2_OD                   ODCONBbits.ODCB3
#define hallSensor2_ANS                  ANSELBbits.ANSELB3
#define hallSensor2_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define hallSensor2_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define hallSensor2_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define hallSensor2_GetValue()           PORTBbits.RB3
#define hallSensor2_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define hallSensor2_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define hallSensor2_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define hallSensor2_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define hallSensor2_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define hallSensor2_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define hallSensor2_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define hallSensor2_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)
#define RB3_SetInterruptHandler  hallSensor2_SetInterruptHandler

// get/set RB4 aliases
#define drvoff_drv_TRIS                 TRISBbits.TRISB4
#define drvoff_drv_LAT                  LATBbits.LATB4
#define drvoff_drv_PORT                 PORTBbits.RB4
#define drvoff_drv_WPU                  WPUBbits.WPUB4
#define drvoff_drv_OD                   ODCONBbits.ODCB4
#define drvoff_drv_ANS                  ANSELBbits.ANSELB4
#define drvoff_drv_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define drvoff_drv_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define drvoff_drv_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define drvoff_drv_GetValue()           PORTBbits.RB4
#define drvoff_drv_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define drvoff_drv_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define drvoff_drv_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define drvoff_drv_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define drvoff_drv_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define drvoff_drv_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define drvoff_drv_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define drvoff_drv_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 aliases
#define horn_TRIS                 TRISBbits.TRISB5
#define horn_LAT                  LATBbits.LATB5
#define horn_PORT                 PORTBbits.RB5
#define horn_WPU                  WPUBbits.WPUB5
#define horn_OD                   ODCONBbits.ODCB5
#define horn_ANS                  ANSELBbits.ANSELB5
#define horn_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define horn_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define horn_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define horn_GetValue()           PORTBbits.RB5
#define horn_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define horn_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define horn_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define horn_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define horn_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define horn_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define horn_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define horn_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RC0 aliases
#define safety1_tst_TRIS                 TRISCbits.TRISC0
#define safety1_tst_LAT                  LATCbits.LATC0
#define safety1_tst_PORT                 PORTCbits.RC0
#define safety1_tst_WPU                  WPUCbits.WPUC0
#define safety1_tst_OD                   ODCONCbits.ODCC0
#define safety1_tst_ANS                  ANSELCbits.
#define safety1_tst_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define safety1_tst_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define safety1_tst_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define safety1_tst_GetValue()           PORTCbits.RC0
#define safety1_tst_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define safety1_tst_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define safety1_tst_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define safety1_tst_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define safety1_tst_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define safety1_tst_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define safety1_tst_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define safety1_tst_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC1 aliases
#define safety1_pulse_TRIS                 TRISCbits.TRISC1
#define safety1_pulse_LAT                  LATCbits.LATC1
#define safety1_pulse_PORT                 PORTCbits.RC1
#define safety1_pulse_WPU                  WPUCbits.WPUC1
#define safety1_pulse_OD                   ODCONCbits.ODCC1
#define safety1_pulse_ANS                  ANSELCbits.
#define safety1_pulse_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define safety1_pulse_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define safety1_pulse_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define safety1_pulse_GetValue()           PORTCbits.RC1
#define safety1_pulse_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define safety1_pulse_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define safety1_pulse_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define safety1_pulse_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define safety1_pulse_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define safety1_pulse_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define safety1_pulse_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define safety1_pulse_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC2 aliases
#define openPB_TRIS                 TRISCbits.TRISC2
#define openPB_LAT                  LATCbits.LATC2
#define openPB_PORT                 PORTCbits.RC2
#define openPB_WPU                  WPUCbits.WPUC2
#define openPB_OD                   ODCONCbits.ODCC2
#define openPB_ANS                  ANSELCbits.
#define openPB_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define openPB_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define openPB_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define openPB_GetValue()           PORTCbits.RC2
#define openPB_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define openPB_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define openPB_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define openPB_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define openPB_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define openPB_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define openPB_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define openPB_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC3 aliases
#define reversePB_TRIS                 TRISCbits.TRISC3
#define reversePB_LAT                  LATCbits.LATC3
#define reversePB_PORT                 PORTCbits.RC3
#define reversePB_WPU                  WPUCbits.WPUC3
#define reversePB_OD                   ODCONCbits.ODCC3
#define reversePB_ANS                  ANSELCbits.
#define reversePB_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define reversePB_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define reversePB_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define reversePB_GetValue()           PORTCbits.RC3
#define reversePB_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define reversePB_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define reversePB_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define reversePB_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define reversePB_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define reversePB_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define reversePB_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define reversePB_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC4 aliases
#define stopSW_TRIS                 TRISCbits.TRISC4
#define stopSW_LAT                  LATCbits.LATC4
#define stopSW_PORT                 PORTCbits.RC4
#define stopSW_WPU                  WPUCbits.WPUC4
#define stopSW_OD                   ODCONCbits.ODCC4
#define stopSW_ANS                  ANSELCbits.
#define stopSW_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define stopSW_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define stopSW_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define stopSW_GetValue()           PORTCbits.RC4
#define stopSW_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define stopSW_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define stopSW_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define stopSW_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define stopSW_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define stopSW_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define stopSW_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define stopSW_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC5 aliases
#define closePB_TRIS                 TRISCbits.TRISC5
#define closePB_LAT                  LATCbits.LATC5
#define closePB_PORT                 PORTCbits.RC5
#define closePB_WPU                  WPUCbits.WPUC5
#define closePB_OD                   ODCONCbits.ODCC5
#define closePB_ANS                  ANSELCbits.
#define closePB_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define closePB_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define closePB_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define closePB_GetValue()           PORTCbits.RC5
#define closePB_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define closePB_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define closePB_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define closePB_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define closePB_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define closePB_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define closePB_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define closePB_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC6 aliases
#define singlePB_TRIS                 TRISCbits.TRISC6
#define singlePB_LAT                  LATCbits.LATC6
#define singlePB_PORT                 PORTCbits.RC6
#define singlePB_WPU                  WPUCbits.WPUC6
#define singlePB_OD                   ODCONCbits.ODCC6
#define singlePB_ANS                  ANSELCbits.
#define singlePB_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define singlePB_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define singlePB_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define singlePB_GetValue()           PORTCbits.RC6
#define singlePB_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define singlePB_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define singlePB_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define singlePB_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define singlePB_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define singlePB_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define singlePB_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define singlePB_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC7 aliases
#define auxOpenPB_TRIS                 TRISCbits.TRISC7
#define auxOpenPB_LAT                  LATCbits.LATC7
#define auxOpenPB_PORT                 PORTCbits.RC7
#define auxOpenPB_WPU                  WPUCbits.WPUC7
#define auxOpenPB_OD                   ODCONCbits.ODCC7
#define auxOpenPB_ANS                  ANSELCbits.
#define auxOpenPB_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define auxOpenPB_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define auxOpenPB_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define auxOpenPB_GetValue()           PORTCbits.RC7
#define auxOpenPB_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define auxOpenPB_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define auxOpenPB_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define auxOpenPB_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define auxOpenPB_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define auxOpenPB_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define auxOpenPB_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define auxOpenPB_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RD4 aliases
#define motorDirection_led_TRIS                 TRISDbits.TRISD4
#define motorDirection_led_LAT                  LATDbits.LATD4
#define motorDirection_led_PORT                 PORTDbits.RD4
#define motorDirection_led_WPU                  WPUDbits.WPUD4
#define motorDirection_led_OD                   ODCONDbits.ODCD4
#define motorDirection_led_ANS                  ANSELDbits.ANSELD4
#define motorDirection_led_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define motorDirection_led_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define motorDirection_led_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define motorDirection_led_GetValue()           PORTDbits.RD4
#define motorDirection_led_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define motorDirection_led_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define motorDirection_led_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define motorDirection_led_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define motorDirection_led_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define motorDirection_led_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define motorDirection_led_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define motorDirection_led_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set RD5 aliases
#define nsleep_drv_TRIS                 TRISDbits.TRISD5
#define nsleep_drv_LAT                  LATDbits.LATD5
#define nsleep_drv_PORT                 PORTDbits.RD5
#define nsleep_drv_WPU                  WPUDbits.WPUD5
#define nsleep_drv_OD                   ODCONDbits.ODCD5
#define nsleep_drv_ANS                  ANSELDbits.ANSELD5
#define nsleep_drv_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define nsleep_drv_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define nsleep_drv_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define nsleep_drv_GetValue()           PORTDbits.RD5
#define nsleep_drv_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define nsleep_drv_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define nsleep_drv_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define nsleep_drv_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define nsleep_drv_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define nsleep_drv_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define nsleep_drv_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define nsleep_drv_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set RD6 aliases
#define ipropi_drv_TRIS                 TRISDbits.TRISD6
#define ipropi_drv_LAT                  LATDbits.LATD6
#define ipropi_drv_PORT                 PORTDbits.RD6
#define ipropi_drv_WPU                  WPUDbits.WPUD6
#define ipropi_drv_OD                   ODCONDbits.ODCD6
#define ipropi_drv_ANS                  ANSELDbits.ANSELD6
#define ipropi_drv_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define ipropi_drv_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define ipropi_drv_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define ipropi_drv_GetValue()           PORTDbits.RD6
#define ipropi_drv_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define ipropi_drv_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define ipropi_drv_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define ipropi_drv_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define ipropi_drv_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define ipropi_drv_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define ipropi_drv_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define ipropi_drv_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set RD7 aliases
#define nfault_drv_TRIS                 TRISDbits.TRISD7
#define nfault_drv_LAT                  LATDbits.LATD7
#define nfault_drv_PORT                 PORTDbits.RD7
#define nfault_drv_WPU                  WPUDbits.WPUD7
#define nfault_drv_OD                   ODCONDbits.ODCD7
#define nfault_drv_ANS                  ANSELDbits.ANSELD7
#define nfault_drv_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define nfault_drv_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define nfault_drv_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define nfault_drv_GetValue()           PORTDbits.RD7
#define nfault_drv_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define nfault_drv_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define nfault_drv_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define nfault_drv_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define nfault_drv_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define nfault_drv_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define nfault_drv_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define nfault_drv_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set RE0 aliases
#define force_dial_TRIS                 TRISEbits.TRISE0
#define force_dial_LAT                  LATEbits.LATE0
#define force_dial_PORT                 PORTEbits.RE0
#define force_dial_WPU                  WPUEbits.WPUE0
#define force_dial_OD                   ODCONEbits.ODCE0
#define force_dial_ANS                  ANSELEbits.ANSELE0
#define force_dial_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define force_dial_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define force_dial_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define force_dial_GetValue()           PORTEbits.RE0
#define force_dial_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define force_dial_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define force_dial_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define force_dial_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define force_dial_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define force_dial_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define force_dial_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define force_dial_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set RE1 aliases
#define limit_led_TRIS                 TRISEbits.TRISE1
#define limit_led_LAT                  LATEbits.LATE1
#define limit_led_PORT                 PORTEbits.RE1
#define limit_led_WPU                  WPUEbits.WPUE1
#define limit_led_OD                   ODCONEbits.ODCE1
#define limit_led_ANS                  ANSELEbits.ANSELE1
#define limit_led_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define limit_led_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define limit_led_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define limit_led_GetValue()           PORTEbits.RE1
#define limit_led_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define limit_led_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define limit_led_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define limit_led_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define limit_led_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define limit_led_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define limit_led_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define limit_led_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

// get/set RE4 aliases
#define safety3_pulse_TRIS                 TRISEbits.TRISE4
#define safety3_pulse_LAT                  LATEbits.LATE4
#define safety3_pulse_PORT                 PORTEbits.RE4
#define safety3_pulse_WPU                  WPUEbits.WPUE4
#define safety3_pulse_OD                   ODCONEbits.ODCE4
#define safety3_pulse_ANS                  ANSELEbits.ANSELE4
#define safety3_pulse_SetHigh()            do { LATEbits.LATE4 = 1; } while(0)
#define safety3_pulse_SetLow()             do { LATEbits.LATE4 = 0; } while(0)
#define safety3_pulse_Toggle()             do { LATEbits.LATE4 = ~LATEbits.LATE4; } while(0)
#define safety3_pulse_GetValue()           PORTEbits.RE4
#define safety3_pulse_SetDigitalInput()    do { TRISEbits.TRISE4 = 1; } while(0)
#define safety3_pulse_SetDigitalOutput()   do { TRISEbits.TRISE4 = 0; } while(0)
#define safety3_pulse_SetPullup()          do { WPUEbits.WPUE4 = 1; } while(0)
#define safety3_pulse_ResetPullup()        do { WPUEbits.WPUE4 = 0; } while(0)
#define safety3_pulse_SetPushPull()        do { ODCONEbits.ODCE4 = 0; } while(0)
#define safety3_pulse_SetOpenDrain()       do { ODCONEbits.ODCE4 = 1; } while(0)
#define safety3_pulse_SetAnalogMode()      do { ANSELEbits.ANSELE4 = 1; } while(0)
#define safety3_pulse_SetDigitalMode()     do { ANSELEbits.ANSELE4 = 0; } while(0)

// get/set RE5 aliases
#define drv_PH_TRIS                 TRISEbits.TRISE5
#define drv_PH_LAT                  LATEbits.LATE5
#define drv_PH_PORT                 PORTEbits.RE5
#define drv_PH_WPU                  WPUEbits.WPUE5
#define drv_PH_OD                   ODCONEbits.ODCE5
#define drv_PH_ANS                  ANSELEbits.ANSELE5
#define drv_PH_SetHigh()            do { LATEbits.LATE5 = 1; } while(0)
#define drv_PH_SetLow()             do { LATEbits.LATE5 = 0; } while(0)
#define drv_PH_Toggle()             do { LATEbits.LATE5 = ~LATEbits.LATE5; } while(0)
#define drv_PH_GetValue()           PORTEbits.RE5
#define drv_PH_SetDigitalInput()    do { TRISEbits.TRISE5 = 1; } while(0)
#define drv_PH_SetDigitalOutput()   do { TRISEbits.TRISE5 = 0; } while(0)
#define drv_PH_SetPullup()          do { WPUEbits.WPUE5 = 1; } while(0)
#define drv_PH_ResetPullup()        do { WPUEbits.WPUE5 = 0; } while(0)
#define drv_PH_SetPushPull()        do { ODCONEbits.ODCE5 = 0; } while(0)
#define drv_PH_SetOpenDrain()       do { ODCONEbits.ODCE5 = 1; } while(0)
#define drv_PH_SetAnalogMode()      do { ANSELEbits.ANSELE5 = 1; } while(0)
#define drv_PH_SetDigitalMode()     do { ANSELEbits.ANSELE5 = 0; } while(0)

// get/set RE6 aliases
#define enable_drv_TRIS                 TRISEbits.TRISE6
#define enable_drv_LAT                  LATEbits.LATE6
#define enable_drv_PORT                 PORTEbits.RE6
#define enable_drv_WPU                  WPUEbits.WPUE6
#define enable_drv_OD                   ODCONEbits.ODCE6
#define enable_drv_ANS                  ANSELEbits.ANSELE6
#define enable_drv_SetHigh()            do { LATEbits.LATE6 = 1; } while(0)
#define enable_drv_SetLow()             do { LATEbits.LATE6 = 0; } while(0)
#define enable_drv_Toggle()             do { LATEbits.LATE6 = ~LATEbits.LATE6; } while(0)
#define enable_drv_GetValue()           PORTEbits.RE6
#define enable_drv_SetDigitalInput()    do { TRISEbits.TRISE6 = 1; } while(0)
#define enable_drv_SetDigitalOutput()   do { TRISEbits.TRISE6 = 0; } while(0)
#define enable_drv_SetPullup()          do { WPUEbits.WPUE6 = 1; } while(0)
#define enable_drv_ResetPullup()        do { WPUEbits.WPUE6 = 0; } while(0)
#define enable_drv_SetPushPull()        do { ODCONEbits.ODCE6 = 0; } while(0)
#define enable_drv_SetOpenDrain()       do { ODCONEbits.ODCE6 = 1; } while(0)
#define enable_drv_SetAnalogMode()      do { ANSELEbits.ANSELE6 = 1; } while(0)
#define enable_drv_SetDigitalMode()     do { ANSELEbits.ANSELE6 = 0; } while(0)

// get/set RF0 aliases
#define closeSafety_LED_TRIS                 TRISFbits.TRISF0
#define closeSafety_LED_LAT                  LATFbits.LATF0
#define closeSafety_LED_PORT                 PORTFbits.RF0
#define closeSafety_LED_WPU                  WPUFbits.WPUF0
#define closeSafety_LED_OD                   ODCONFbits.ODCF0
#define closeSafety_LED_ANS                  ANSELFbits.ANSELF0
#define closeSafety_LED_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define closeSafety_LED_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define closeSafety_LED_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define closeSafety_LED_GetValue()           PORTFbits.RF0
#define closeSafety_LED_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define closeSafety_LED_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define closeSafety_LED_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define closeSafety_LED_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define closeSafety_LED_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define closeSafety_LED_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define closeSafety_LED_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define closeSafety_LED_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set RF1 aliases
#define openSafety_led_TRIS                 TRISFbits.TRISF1
#define openSafety_led_LAT                  LATFbits.LATF1
#define openSafety_led_PORT                 PORTFbits.RF1
#define openSafety_led_WPU                  WPUFbits.WPUF1
#define openSafety_led_OD                   ODCONFbits.ODCF1
#define openSafety_led_ANS                  ANSELFbits.ANSELF1
#define openSafety_led_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define openSafety_led_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define openSafety_led_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define openSafety_led_GetValue()           PORTFbits.RF1
#define openSafety_led_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define openSafety_led_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define openSafety_led_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define openSafety_led_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define openSafety_led_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define openSafety_led_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define openSafety_led_SetAnalogMode()      do { ANSELFbits.ANSELF1 = 1; } while(0)
#define openSafety_led_SetDigitalMode()     do { ANSELFbits.ANSELF1 = 0; } while(0)

// get/set RG0 aliases
#define handing_TRIS                 TRISGbits.TRISG0
#define handing_LAT                  LATGbits.LATG0
#define handing_PORT                 PORTGbits.RG0
#define handing_WPU                  WPUGbits.WPUG0
#define handing_OD                   ODCONGbits.ODCG0
#define handing_ANS                  ANSELGbits.ANSELG0
#define handing_SetHigh()            do { LATGbits.LATG0 = 1; } while(0)
#define handing_SetLow()             do { LATGbits.LATG0 = 0; } while(0)
#define handing_Toggle()             do { LATGbits.LATG0 = ~LATGbits.LATG0; } while(0)
#define handing_GetValue()           PORTGbits.RG0
#define handing_SetDigitalInput()    do { TRISGbits.TRISG0 = 1; } while(0)
#define handing_SetDigitalOutput()   do { TRISGbits.TRISG0 = 0; } while(0)
#define handing_SetPullup()          do { WPUGbits.WPUG0 = 1; } while(0)
#define handing_ResetPullup()        do { WPUGbits.WPUG0 = 0; } while(0)
#define handing_SetPushPull()        do { ODCONGbits.ODCG0 = 0; } while(0)
#define handing_SetOpenDrain()       do { ODCONGbits.ODCG0 = 1; } while(0)
#define handing_SetAnalogMode()      do { ANSELGbits.ANSELG0 = 1; } while(0)
#define handing_SetDigitalMode()     do { ANSELGbits.ANSELG0 = 0; } while(0)

// get/set RG6 aliases
#define safety3_res_TRIS                 TRISGbits.TRISG6
#define safety3_res_LAT                  LATGbits.LATG6
#define safety3_res_PORT                 PORTGbits.RG6
#define safety3_res_WPU                  WPUGbits.WPUG6
#define safety3_res_OD                   ODCONGbits.ODCG6
#define safety3_res_ANS                  ANSELGbits.ANSELG6
#define safety3_res_SetHigh()            do { LATGbits.LATG6 = 1; } while(0)
#define safety3_res_SetLow()             do { LATGbits.LATG6 = 0; } while(0)
#define safety3_res_Toggle()             do { LATGbits.LATG6 = ~LATGbits.LATG6; } while(0)
#define safety3_res_GetValue()           PORTGbits.RG6
#define safety3_res_SetDigitalInput()    do { TRISGbits.TRISG6 = 1; } while(0)
#define safety3_res_SetDigitalOutput()   do { TRISGbits.TRISG6 = 0; } while(0)
#define safety3_res_SetPullup()          do { WPUGbits.WPUG6 = 1; } while(0)
#define safety3_res_ResetPullup()        do { WPUGbits.WPUG6 = 0; } while(0)
#define safety3_res_SetPushPull()        do { ODCONGbits.ODCG6 = 0; } while(0)
#define safety3_res_SetOpenDrain()       do { ODCONGbits.ODCG6 = 1; } while(0)
#define safety3_res_SetAnalogMode()      do { ANSELGbits.ANSELG6 = 1; } while(0)
#define safety3_res_SetDigitalMode()     do { ANSELGbits.ANSELG6 = 0; } while(0)

// get/set RG7 aliases
#define timer_dial_TRIS                 TRISGbits.TRISG7
#define timer_dial_LAT                  LATGbits.LATG7
#define timer_dial_PORT                 PORTGbits.RG7
#define timer_dial_WPU                  WPUGbits.WPUG7
#define timer_dial_OD                   ODCONGbits.ODCG7
#define timer_dial_ANS                  ANSELGbits.ANSELG7
#define timer_dial_SetHigh()            do { LATGbits.LATG7 = 1; } while(0)
#define timer_dial_SetLow()             do { LATGbits.LATG7 = 0; } while(0)
#define timer_dial_Toggle()             do { LATGbits.LATG7 = ~LATGbits.LATG7; } while(0)
#define timer_dial_GetValue()           PORTGbits.RG7
#define timer_dial_SetDigitalInput()    do { TRISGbits.TRISG7 = 1; } while(0)
#define timer_dial_SetDigitalOutput()   do { TRISGbits.TRISG7 = 0; } while(0)
#define timer_dial_SetPullup()          do { WPUGbits.WPUG7 = 1; } while(0)
#define timer_dial_ResetPullup()        do { WPUGbits.WPUG7 = 0; } while(0)
#define timer_dial_SetPushPull()        do { ODCONGbits.ODCG7 = 0; } while(0)
#define timer_dial_SetOpenDrain()       do { ODCONGbits.ODCG7 = 1; } while(0)
#define timer_dial_SetAnalogMode()      do { ANSELGbits.ANSELG7 = 1; } while(0)
#define timer_dial_SetDigitalMode()     do { ANSELGbits.ANSELG7 = 0; } while(0)

// get/set RH0 aliases
#define safety2_tst_TRIS                 TRISHbits.TRISH0
#define safety2_tst_LAT                  LATHbits.LATH0
#define safety2_tst_PORT                 PORTHbits.RH0
#define safety2_tst_WPU                  WPUHbits.WPUH0
#define safety2_tst_OD                   ODCONHbits.ODCH0
#define safety2_tst_ANS                  ANSELHbits.
#define safety2_tst_SetHigh()            do { LATHbits.LATH0 = 1; } while(0)
#define safety2_tst_SetLow()             do { LATHbits.LATH0 = 0; } while(0)
#define safety2_tst_Toggle()             do { LATHbits.LATH0 = ~LATHbits.LATH0; } while(0)
#define safety2_tst_GetValue()           PORTHbits.RH0
#define safety2_tst_SetDigitalInput()    do { TRISHbits.TRISH0 = 1; } while(0)
#define safety2_tst_SetDigitalOutput()   do { TRISHbits.TRISH0 = 0; } while(0)
#define safety2_tst_SetPullup()          do { WPUHbits.WPUH0 = 1; } while(0)
#define safety2_tst_ResetPullup()        do { WPUHbits.WPUH0 = 0; } while(0)
#define safety2_tst_SetPushPull()        do { ODCONHbits.ODCH0 = 0; } while(0)
#define safety2_tst_SetOpenDrain()       do { ODCONHbits.ODCH0 = 1; } while(0)
#define safety2_tst_SetAnalogMode()      do { ANSELHbits. = 1; } while(0)
#define safety2_tst_SetDigitalMode()     do { ANSELHbits. = 0; } while(0)

// get/set RH1 aliases
#define safety4_tst_TRIS                 TRISHbits.TRISH1
#define safety4_tst_LAT                  LATHbits.LATH1
#define safety4_tst_PORT                 PORTHbits.RH1
#define safety4_tst_WPU                  WPUHbits.WPUH1
#define safety4_tst_OD                   ODCONHbits.ODCH1
#define safety4_tst_ANS                  ANSELHbits.
#define safety4_tst_SetHigh()            do { LATHbits.LATH1 = 1; } while(0)
#define safety4_tst_SetLow()             do { LATHbits.LATH1 = 0; } while(0)
#define safety4_tst_Toggle()             do { LATHbits.LATH1 = ~LATHbits.LATH1; } while(0)
#define safety4_tst_GetValue()           PORTHbits.RH1
#define safety4_tst_SetDigitalInput()    do { TRISHbits.TRISH1 = 1; } while(0)
#define safety4_tst_SetDigitalOutput()   do { TRISHbits.TRISH1 = 0; } while(0)
#define safety4_tst_SetPullup()          do { WPUHbits.WPUH1 = 1; } while(0)
#define safety4_tst_ResetPullup()        do { WPUHbits.WPUH1 = 0; } while(0)
#define safety4_tst_SetPushPull()        do { ODCONHbits.ODCH1 = 0; } while(0)
#define safety4_tst_SetOpenDrain()       do { ODCONHbits.ODCH1 = 1; } while(0)
#define safety4_tst_SetAnalogMode()      do { ANSELHbits. = 1; } while(0)
#define safety4_tst_SetDigitalMode()     do { ANSELHbits. = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the hallSensor1 pin functionality
 * @param none
 * @return none
 */
void hallSensor1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for hallSensor1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for hallSensor1 at application runtime
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void hallSensor1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for hallSensor1 pin.
 *        This is a dynamic interrupt handler to be used together with the hallSensor1_SetInterruptHandler() method.
 *        This handler is called every time the hallSensor1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*hallSensor1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for hallSensor1 pin. 
 *        This is a predefined interrupt handler to be used together with the hallSensor1_SetInterruptHandler() method.
 *        This handler is called every time the hallSensor1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void hallSensor1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the hallSensor2 pin functionality
 * @param none
 * @return none
 */
void hallSensor2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for hallSensor2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for hallSensor2 at application runtime
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void hallSensor2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for hallSensor2 pin.
 *        This is a dynamic interrupt handler to be used together with the hallSensor2_SetInterruptHandler() method.
 *        This handler is called every time the hallSensor2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*hallSensor2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for hallSensor2 pin. 
 *        This is a predefined interrupt handler to be used together with the hallSensor2_SetInterruptHandler() method.
 *        This handler is called every time the hallSensor2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void hallSensor2_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/