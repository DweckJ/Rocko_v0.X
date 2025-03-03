/* 
 * File:   rockoStateMachine.h
 * Author: jared
 *
 * Created on January 13, 2025, 2:09 PM
 */
#include "mcc_generated_files/system/system.h"
#include "timers.h"
#include "motorState.h"
#ifndef ROCKOSTATEMACHINE_H
#define	ROCKOSTATEMACHINE_H



    enum rockoState {
        go_stopOpen = 1,
        go_stopClose,
        go_Open,
        go_Close,
        go_Reverse,
        go_OpenLimit,
        go_CloseLimit
    };

    int rockoState =go_stopOpen;
void rockoStateMachine();

#endif	/* ROCKOSTATEMACHINE_H */

