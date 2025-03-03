/* 
 * File:   inputs.h
 * Author: jared
 *
 * Created on January 13, 2025, 12:07 PM
 */
#include "mcc_generated_files/system/system.h"

#ifndef INPUTS_H
#define	INPUTS_H

#ifdef	__cplusplus
extern "C" {
#endif


struct command {
    uint8_t status;                         // momentary
    uint8_t cpStatus;                       // constant pressure
    unsigned int debounceFilter;
    const unsigned int debounceTime;
    uint8_t contactType;                    // normally open == 0,  normally closed == 1
    bool messageFlag;                       // used to send debug messages
} command ;

#define loopTime    1
#define _1000ms     1000/loopTime
#define _750ms      750/loopTime
#define _500ms      500/loopTime
#define _200ms      200/loopTime
#define _20ms       20/loopTime
#define _5ms       5/loopTime

#define commandDebounce _20ms
#define limitDebounce _5ms

struct command cmdOpen ={0,0,0,commandDebounce, 0,0 };
struct command cmdClose ={0,0,0,commandDebounce, 0,0 };
struct command cmdSingle ={0,0,0,commandDebounce, 0,0 };
struct command cmdAuxOpen ={0,0,0,commandDebounce, 0,0 };
struct command cmdReverse ={0,0,0,commandDebounce, 0,0 };
struct command cmdStopPb ={0,0,0,commandDebounce, 0,0 };
struct command cmdStopSw ={0,0,0,commandDebounce, 0,0 };

struct command openLimit = {0,0,0,limitDebounce,0,0};
struct command closeLimit = {0,0,0,limitDebounce,0,0};
void inputs();

#ifdef	__cplusplus
}
#endif

#endif	/* INPUTS_H */

