/* 
 * File:   motorState.h
 * Author: jared
 *
 * Created on January 21, 2025, 2:15 PM
 */

#ifndef MOTORSTATE_H
#define	MOTORSTATE_H

#include "mcc_generated_files/system/system.h"
#include "inputs.h"
#include "rockoStateMachine.h"
#include "timers.h"

#ifdef	__cplusplus
extern "C" {
#endif

    void motorOpen();
    void motorClose();
    void motorStop();


#ifdef	__cplusplus
}
#endif

#endif	/* MOTORSTATE_H */

