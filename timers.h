/* 
 * File:   timers.h
 * Author: jared
 *
 * Created on January 16, 2025, 11:30 AM
 */

#ifndef TIMERS_H
#define	TIMERS_H

#ifdef	__cplusplus
extern "C" {
#endif
#include "mcc_generated_files/system/system.h"

struct timer {
    uint16_t timer;
    uint16_t limit;
    bool flag;
    bool reset;
} timer;

struct timer reverseTimer = {0,1000,0,0};
struct timer delayBeforeReverse = {0,500,0,0};
struct timer hornToggleTimer = {0,500,0,0};
struct timer maxRunTimer = {0,200,0,0};
struct timer motorDelayTimer = {0,200,0,0};
struct timer motorDelayTimerC = {0,75,0,0};
void updateTimer (struct timer *timerName, bool reset);
void timers();
volatile uint32_t current_time = 0;
#ifdef	__cplusplus
}
#endif

#endif	/* TIMERS_H */

