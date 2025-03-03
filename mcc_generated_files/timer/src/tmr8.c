/**
 * TMR8 Generated Driver File
 *
 * @file tmr8.c
 * 
 * @ingroup  tmr8
 * 
 * @brief API implementations for the TMR8 module.
 *
 * @version TMR8 Driver Version 3.0.4
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

/**
  Section: Included Files
*/

#include <xc.h>
#include "../tmr8.h"

const struct TMR_INTERFACE Timer8 = {
    .Initialize = TMR8_Initialize,
    .Start = TMR8_Start,
    .Stop = TMR8_Stop,
    .PeriodCountSet = TMR8_PeriodCountSet,
    .TimeoutCallbackRegister = TMR8_OverflowCallbackRegister,
    .Tasks = TMR8_Tasks
};

static void (*TMR8_OverflowCallback)(void);
static void TMR8_DefaultOverflowCallback(void);

/**
  Section: TMR8 APIs
*/

void TMR8_Initialize(void){

    // Set TMR8 to the options selected in the User Interface
    // TCS T8CKIPPS pin; 
    T8CLKCON = 0x0;
    // TMODE Software control; TCKSYNC Not Synchronized; TCKPOL Rising Edge; TPSYNC Not Synchronized; 
    T8HLT = 0x0;
    // TRSEL T8CKIPPS pin; 
    T8RST = 0x0;
    // PR 255; 
    T8PR = 0xFF;
    // TMR 0x0; 
    T8TMR = 0x0;

    // Set default overflow callback
    TMR8_OverflowCallbackRegister(TMR8_DefaultOverflowCallback);

    // Clearing IF flag.
    PIR5bits.TMR8IF = 0;
    // TCKPS 1:1; TMRON on; TOUTPS 1:1; 
    T8CON = 0x80;
}

void TMR8_ModeSet(TMR8_HLT_MODE mode)
{
   // Configure different types HLT mode
    T8HLTbits.T8MODE = mode;
}

void TMR8_ExtResetSourceSet(TMR8_HLT_EXT_RESET_SOURCE reset)
{
    //Configure different types of HLT external reset source
    T8RSTbits.T8RSEL = reset;
}

void TMR8_Start(void)
{
    // Start the Timer by writing to TMRxON bit
    T8CONbits.TMR8ON = 1;
}

void TMR8_Stop(void)
{
    // Stop the Timer by writing to TMRxON bit
    T8CONbits.TMR8ON = 0;
}

uint8_t TMR8_Read(void)
{
    uint8_t readVal;
    readVal = TMR8;
    return readVal;
}

void TMR8_Write(uint8_t timerVal)
{
    // Write to the Timer8 register
    TMR8 = timerVal;;
}

void TMR8_PeriodCountSet(size_t periodVal)
{
   PR8 = (uint8_t) periodVal;
}

void TMR8_OverflowCallbackRegister(void (* InterruptHandler)(void))
{
   TMR8_OverflowCallback = InterruptHandler;
}

static void TMR8_DefaultOverflowCallback(void)
{
    // add your TMR8 interrupt custom code
    // or set custom function using TMR8_OverflowCallbackRegister()
}

void TMR8_Tasks(void)
{
    if(PIR5bits.TMR8IF)
    {
        // Clearing IF flag.
        PIR5bits.TMR8IF = 0;
       TMR8_OverflowCallback();
    }
}

