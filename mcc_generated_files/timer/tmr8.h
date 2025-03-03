/**
 * TMR8 Generated Driver API Header File
 *
 * @file tmr8.h
 *  
 * @defgroup tmr8 TMR8
 *
 * @brief This file contains the API Prototypes and other data types for the TMR8 driver.
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

#ifndef TMR8_H
#define TMR8_H

#include <stdint.h>
#include <stdbool.h>
#include "timer_interface.h"


/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_Initialize API
 */
#define Timer8_Initialize TMR8_Initialize

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_ModeSet API
 */
#define Timer8_ModeSet TMR8_ModeSet

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_ExtResetSourceSet API
 */
#define Timer8_ExtResetSourceSet TMR8_ExtResetSourceSet

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_Start API
 */
#define Timer8_Start TMR8_Start

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_Stop API
 */
#define Timer8_Stop TMR8_Stop

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_Read API
 */
#define Timer8_Read TMR8_Read

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_Write API
 */
#define Timer8_Write TMR8_Write

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_PeriodCountSet API
 */
#define Timer8_PeriodCountSet TMR8_PeriodCountSet

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_OverflowCallbackRegister API
 */
#define Timer8_OverflowCallbackRegister TMR8_OverflowCallbackRegister

/**
 * @ingroup tmr8
 * @brief Defines the Custom Name for the \ref TMR8_Tasks API
 */
#define Timer8_Tasks TMR8_Tasks

/**
 @ingroup tmr8
 @struct TMR_INTERFACE
 @brief This is an instance of TMR_INTERFACE for TMR8 module.
 */
extern const struct TMR_INTERFACE Timer8;

/**
 * @ingroup tmr8
 * @enum TMR8_HLT_EXT_RESET_SOURCE
 * @brief Defines the several modes of operation of the timer with the HLT extension.
 */
typedef enum
{

	/* Roll-over Pulse mode clears the TMRx upon TMRx = PRx, then continue running.
	ON bit must be set and is not affected by Resets
	*/

   /* Roll-over Pulse mode indicates that Timer starts
   immediately upon ON = 1 (Software Control)
   */
   TMR8_ROP_STARTS_TMRON,

   /* Roll-over Pulse mode indicates that the Timer starts
       when ON = 1 and TMRx_ers = 1. Stops when TMRx_ers = 0
     */
   TMR8_ROP_STARTS_TMRON_ERSHIGH,

   /* Roll-over Pulse mode indicates that the Timer starts
      when ON = 1 and TMRx_ers = 0. Stops when TMRx_ers = 1
     */
   TMR8_ROP_STARTS_TMRON_ERSLOW,

   /* Roll-over Pulse mode indicates that the Timer resets
   upon rising or falling edge of TMRx_ers
     */
   TMR8_ROP_RESETS_ERSBOTHEDGE,

   /* Roll-over Pulse mode indicates that the Timer resets
    upon rising edge of TMRx_ers
     */
   TMR8_ROP_RESETS_ERSRISINGEDGE,

   /* Roll-over Pulse mode indicates that the Timer resets
   upon falling edge of TMRx_ers
     */
   TMR8_ROP_RESETS_ERSFALLINGEDGE,

   /* Roll-over Pulse mode indicates that the Timer resets
   upon TMRx_ers = 0
     */
   TMR8_ROP_RESETS_ERSLOW,

   /* Roll-over Pulse mode indicates that the Timer resets
   upon TMRx_ers = 1
     */
   TMR8_ROP_RESETS_ERSHIGH,

    /*In all One-Shot mode the timer resets and the ON bit is
	cleared when the timer value matches the PRx period
	value. The ON bit must be set by software to start
	another timer cycle.
	*/

   /* One shot mode indicates that the Timer starts
    immediately upon ON = 1 (Software Control)
     */
   TMR8_OS_STARTS_TMRON,

   /* One shot mode indicates that the Timer starts
    when a rising edge is detected on the TMRx_ers
     */
   TMR8_OS_STARTS_ERSRISINGEDGE ,

   /* One shot mode indicates that the Timer starts
    when a falling edge is detected on the TMRx_ers
     */
   TMR8_OS_STARTS_ERSFALLINGEDGE ,

   /* One shot mode indicates that the Timer starts
    when either a rising or falling edge is detected on TMRx_ers
     */
   TMR8_OS_STARTS_ERSBOTHEDGE,

   /* One shot mode indicates that the Timer starts
    upon first TMRx_ers rising edge and resets on all
	subsequent TMRx_ers rising edges
     */
   TMR8_OS_STARTS_ERSFIRSTRISINGEDGE,

   /* One shot mode indicates that the Timer starts
    upon first TMRx_ers falling edge and restarts on all
	subsequent TMRx_ers falling edges
     */
   TMR8_OS_STARTS_ERSFIRSTFALLINGEDGE,

   /* One shot mode indicates that the Timer starts
    when a rising edge is detected on the TMRx_ers,
	resets upon TMRx_ers = 0
     */
   TMR8_OS_STARTS_ERSRISINGEDGEDETECT,
     /* One shot mode indicates that the Timer starts
    when a falling edge is detected on the TMRx_ers,
	resets upon TMRx_ers = 1
     */
   TMR8_OS_STARTS_ERSFALLINGEDGEDETECT,
   
   /* One shot mode indicates that the Timer starts
    when a TMRx_ers = 1,ON =1 and resets upon TMRx_ers =0
    */
   TMR8_OS_STARTS_TMRON_ERSHIGH = 0x16,
           
   /* One shot mode indicates that the Timer starts
     when a TMRx_ers = 0,ON = 1 and resets upon TMRx_ers =1 
    */
   TMR8_OS_STARTS_TMRON_ERSLOW = 0x17,
        
   /*In all Mono-Stable mode the ON bit must be initially set,but
     not cleared upon the TMRx = PRx, and the timer will start upon
     an TMRx_ers start event following TMRx = PRx.*/
               
   /* Mono Stable mode indicates that the Timer starts
      when a rising edge is detected on the TMRx_ers and ON = 1
    */
   TMR8_MS_STARTS_TMRON_ERSRISINGEDGEDETECT = 0x11,
           
   /* Mono Stable mode indicates that the Timer starts
      when a falling edge is detected on the TMRx_ers and ON = 1
    */
   TMR8_MS_STARTS_TMRON_ERSFALLINGEDGEDETECT = 0x12,
           
   /* Mono Stable mode indicates that the Timer starts
      when  either a rising or falling edge is detected on TMRx_ers 
      and ON = 1
    */
   TMR8_MS_STARTS_TMRON_ERSBOTHEDGE = 0x13
           
} TMR8_HLT_MODE;

/**
 * @ingroup tmr8
 * @enum TMR8_HLT_EXT_RESET_SOURCE
 * @brief Defines the different reset sources of the HLT.
 */
typedef enum
{
    /*
     * T8CKIPPS_PIN as the Timer external reset source
     */
    TMR8_T8CKIPPS_PIN =  0x0,   
    /*
     * TMR2_POSTSCALED as the Timer external reset source
     */
    TMR8_TMR2_POSTSCALED =  0x1,   
    /*
     * TMR4_POSTSCALED as the Timer external reset source
     */
    TMR8_TMR4_POSTSCALED =  0x2,   
    /*
     * TMR6_POSTSCALED as the Timer external reset source
     */
    TMR8_TMR6_POSTSCALED =  0x3,   
    /*
     * CCP1OUT as the Timer external reset source
     */
    TMR8_CCP1OUT =  0x5,   
    /*
     * CCP2OUT as the Timer external reset source
     */
    TMR8_CCP2OUT =  0x6,   
    /*
     * CCP3OUT as the Timer external reset source
     */
    TMR8_CCP3OUT =  0x7,   
    /*
     * CCP4OUT as the Timer external reset source
     */
    TMR8_CCP4OUT =  0x8,   
    /*
     * CCP5OUT as the Timer external reset source
     */
    TMR8_CCP5OUT =  0x9,   
    /*
     * PWM6OUT as the Timer external reset source
     */
    TMR8_PWM6OUT =  0xa,   
    /*
     * PWM7OUT as the Timer external reset source
     */
    TMR8_PWM7OUT =  0xb,   
    /*
     * CMP1OUT as the Timer external reset source
     */
    TMR8_CMP1OUT =  0xc,   
    /*
     * CMP2OUT as the Timer external reset source
     */
    TMR8_CMP2OUT =  0xd,   
    /*
     * CMP3OUT as the Timer external reset source
     */
    TMR8_CMP3OUT =  0xe,   
    /*
     * ZCDOUT as the Timer external reset source
     */
    TMR8_ZCDOUT =  0xf   
} TMR8_HLT_EXT_RESET_SOURCE;

/**
  Section: TMR8 APIs
*/

/**
 * @ingroup tmr8
 * @brief Initializes the TMR8 module. This routine must be called before any other timer routines.
 * @param None.
 * @return None.
 */
void TMR8_Initialize(void);

/**
 * @ingroup tmr8
 * @brief Configures the Hardware Limit Timer (HLT) mode.
 * @pre The TMR8 should be initialized with TMR8_Initialize after calling this API.
 * @param mode - Value to write into T8HLTbits.MODE bits.
 * @return None.
 */
void TMR8_ModeSet(TMR8_HLT_MODE mode);

/**
 * @ingroup tmr8
 * @brief Configures the HLT external reset source.
 * @pre The TMR8 should be initialized with TMR8_Initialize after calling this API.
 * @param reset - Value to write into T8RSTbits.RSEL bits.
 * @return None.
 */
void TMR8_ExtResetSourceSet(TMR8_HLT_EXT_RESET_SOURCE reset);

/**
 * @ingroup tmr8
 * @brief Starts TMR8.
 * @pre The TMR8 should be initialized with TMR8_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR8_Start(void);

/**
 * @ingroup tmr8
 * @brief Stops TMR8.
 * @pre The TMR8 should be initialized with TMR8_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR8_Stop(void);

/**
 * @ingroup tmr8
 * @brief Reads the 8-bit from the TMR8 register.
 * @pre The TMR8 should be initialized with TMR8_Initialize() before calling this API.
 * @param None.
 * @return 8-bit data from the TMR8 register.
 */
uint8_t TMR8_Read(void);

/**
 * @ingroup tmr8
 * @brief Writes the 8-bit value to the TMR8 register.
 * @pre The TMR8 should be initialized with TMR8_Initialize() before calling this API.
 * @param timerVal - 8-bit value written to the TMR8 register.
 * @return None.
 */
void TMR8_Write(uint8_t timerVal);

/**
 * @ingroup tmr8
 * @brief Loads the 8-bit value to the PR8 register.
 * @pre The TMR8 should be initialized with TMR8_Initialize() before calling this API.
 * @param periodVal - 8-bit value written to the PR8 register.
 * @return None.
 */
void TMR8_PeriodCountSet(size_t periodVal);

/**
 * @ingroup tmr8
 * @brief Setter function for the TMR8 overflow callback.
 * @param CallbackHandler - Pointer to the custom callback.
 * @return None.
 */
void TMR8_OverflowCallbackRegister(void (* InterruptHandler)(void));

/**
 * @ingroup tmr8
 * @brief Performs the tasks to be executed on timer overflow event.
 * @param None.
 * @return None.
 */
void TMR8_Tasks(void);

#endif // TMR8_H
/**
 End of File
*/
