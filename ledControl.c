#include "ledControl.h"

void stopLed(void) {
    if ((cmdStopSw.status || cmdStopPb.status)) {
        stop_led_SetLow();
    } else {
        stop_led_SetHigh();
    }
  
}

void safetyLed(void) {

    if (closeSafety1.resistive_status && closeSafety2.resistive_status  ) {
        closeSafety_LED_SetDigitalOutput();
        closeSafety_LED_Toggle();
    } else if (closeSafety1.resistive_status) {
        closeSafety_LED_SetDigitalOutput();
        closeSafety_LED_SetHigh();
    } 
    else if (closeSafety2.resistive_status) {
        closeSafety_LED_SetDigitalOutput();
        closeSafety_LED_SetLow();
    } 
    else {
        closeSafety_LED_SetDigitalInput();
    }


    if (openSafety1.resistive_status && openSafety2.resistive_status  ) {
        openSafety_led_SetDigitalOutput();
        openSafety_led_Toggle();
    } else if (openSafety1.resistive_status) {
        openSafety_led_SetDigitalOutput();
        openSafety_led_SetLow();
    }  else if (openSafety2.resistive_status) {
        openSafety_led_SetDigitalOutput();
        openSafety_led_SetHigh();
    } else {
        openSafety_led_SetDigitalInput();
    }




}

void limitLed(void) {
    if (openLimit.status && closeLimit.status) {
        limit_led_SetDigitalOutput();
        limit_led_Toggle();
    } else if (openLimit.status) {
        limit_led_SetDigitalOutput();
        limit_led_SetHigh();

    } else if (closeLimit.status) {
        limit_led_SetDigitalOutput();
        limit_led_SetLow();

    } else {
        limit_led_SetDigitalInput();

    }
}

void motorDirectionLED(void) {
    if (rockoState == go_Open) {
        motorDirection_led_SetDigitalOutput();
        motorDirection_led_SetLow(); // open
    } else if (rockoState == go_Close) {
        motorDirection_led_SetDigitalOutput();
        motorDirection_led_SetHigh(); // open
    } else {
        motorDirection_led_SetDigitalInput();
    }          
}

void hornToggle(void) {
    if ((rockoState == go_Open) || (rockoState == go_Close)) {
        if (hornToggleTimer.flag) {
            horn_SetDigitalOutput();
            horn_Toggle();
            hornToggleTimer.timer = 0;
        }
    } else {
        horn_SetLow();
    }


}

void ledControl(void) {
    stopLed();
    safetyLed();
    limitLed();
    motorDirectionLED();
}