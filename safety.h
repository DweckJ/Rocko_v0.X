/* 
 * File:   safety.h
 * Author: jared
 *
 * Created on January 22, 2025, 10:19 AM
 */

#ifndef SAFETY_H
#define	SAFETY_H
#include "mcc_generated_files/system/system.h"
#ifdef	__cplusplus
extern "C" {
#endif

struct Obstruction {
    bool resistive_status;                    // set for pulse ok
    bool pulse_status;                   // set for eol ok
    uint8_t sampleCount;
    uint8_t sampleLimit;
    uint16_t ADC;
  
};

#define defaultSampleLimit 5

struct Obstruction openSafety1 ={0,0,0,defaultSampleLimit,0};
struct Obstruction openSafety2 ={0,0,0,defaultSampleLimit,0};
struct Obstruction closeSafety1 ={0,0,0,defaultSampleLimit,0};
struct Obstruction closeSafety2 ={0,0,0,defaultSampleLimit,0};

void closeSafety_check();
void openSafety_check();
void resistive_safetyCheck(uint16_t adcValue, struct Obstruction *safety);
#ifdef	__cplusplus
}
#endif

#endif	/* SAFETY_H */

