

#include "timers.h"

void timers() {
    while (!TMR0IF) {}         // loop time set by TMR2IF
    TMR0IF = 0;
        

    updateTimer (&reverseTimer, 0);
    updateTimer (&delayBeforeReverse, 0);
    updateTimer (&maxRunTimer, 0);
    updateTimer (&hornToggleTimer, 0);
     updateTimer (&motorDelayTimer, 0);
       updateTimer (&motorDelayTimerC, 0);
}

void updateTimer (struct timer *timerName, bool reset) {
    if (reset || timerName->reset) {
        timerName->timer = timerName->limit + 1;
        timerName->flag = 0;
    }    
    if (timerName->timer < timerName->limit) {
        ++timerName->timer;
        timerName->flag = 0;
        timerName->reset = 0;
    } else if (timerName->timer == timerName->limit) {
        timerName->timer = timerName->limit + 1;
        timerName->flag = 1;
    }
}