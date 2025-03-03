/* 
 * File:   ledControl.h
 * Author: jared
 *
 * Created on January 13, 2025, 1:53 PM
 */
#include "mcc_generated_files/system/system.h"
#include "inputs.h"
#include "rockoStateMachine.h"
#include "timers.h"
#include "safety.h"
#ifndef LEDCONTROL_H
#define	LEDCONTROL_H

#ifdef	__cplusplus
extern "C" {
#endif


void ledControl();
 void   stopLed();
 void   safetyLed();
 void   limitLed();
 void   motorDirectionLED();
 void hornToggle();

#ifdef	__cplusplus
}
#endif

#endif	/* LEDCONTROL_H */

