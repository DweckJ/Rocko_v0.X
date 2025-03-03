#include "rockoStateMachine.h"
#include "inputs.h"

void rockoStateMachine() {

    switch (rockoState) {
        case go_stopOpen:
            motorStop();
            if ((cmdStopSw.status || cmdStopPb.status)) {
                rockoState = go_stopOpen;
            } else if (openLimit.status) {
                rockoState = go_OpenLimit;
            } else if (closeLimit.status) {
                rockoState = go_CloseLimit;
            } else if (delayBeforeReverse.flag) {
                if (cmdOpen.status) {
                    rockoState = go_Open;
                } else if (cmdAuxOpen.status) {
                    rockoState = go_Open;
                } else if (cmdSingle.cpStatus) {
                    rockoState = go_Close;
                } else if (cmdClose.status) {
                    rockoState = go_Close;
                } else {
                    rockoState = go_stopOpen;
                }

            } else {
                rockoState = go_stopOpen;
            }

            break;

        case go_stopClose:
        motorStop();
            if ((cmdStopSw.status || cmdStopPb.status)){
                rockoState = go_stopClose;
            } else if (openLimit.status) {
                rockoState = go_OpenLimit;
            } else if (closeLimit.status) {
                rockoState = go_CloseLimit;
            } else if (delayBeforeReverse.flag) {
                if (cmdOpen.status) {
                    rockoState = go_Open;
                } else if (cmdAuxOpen.status) {
                    rockoState = go_Open;
                } else if (cmdSingle.cpStatus) {
                    rockoState = go_Open;
                } else if (cmdClose.status) {
                    rockoState = go_Close;
                } else {
                    rockoState = go_stopClose;
                }

            } else {
                rockoState = go_stopClose;
            }


            break;

        case go_Open:
      motorOpen();
            delayBeforeReverse.timer = 0;
           if ((cmdStopSw.status || cmdStopPb.status)) {
                rockoState = go_stopClose;
            } else if (openLimit.status) {
                rockoState = go_OpenLimit;
            } else if (cmdSingle.cpStatus) {
                rockoState = go_stopOpen;
            } else {
                rockoState = go_Open;
            }
            break;

        case go_Close:
            motorClose();
             delayBeforeReverse.timer = 0;
            reverseTimer.timer = 0;
            if ((cmdStopSw.status || cmdStopPb.status)) {
                rockoState = go_stopOpen;
            } else if (closeLimit.status) {
                rockoState = go_CloseLimit;
            } else if (cmdOpen.status) {
                rockoState = go_Reverse;
            } else if (cmdAuxOpen.status) {
                rockoState = go_Reverse;
            } else if (cmdSingle.cpStatus) {
                rockoState = go_stopClose;
            } else if (cmdReverse.status) {
                rockoState = go_Reverse;
            } else {
                rockoState = go_Close;
            }
            break;

        case go_Reverse:
          motorStop();
            if (reverseTimer.flag) {
                rockoState = go_Open;
            } else {
                rockoState = go_Reverse;
            }



            break;
        case go_OpenLimit:
         motorStop();
          if ((cmdStopSw.status || cmdStopPb.status)) {
                rockoState = go_OpenLimit;
            } else if (cmdOpen.status) {
                rockoState = go_OpenLimit;
            } else if (cmdAuxOpen.status) {
                rockoState = go_OpenLimit;
            } else if (cmdReverse.status) {
                rockoState = go_OpenLimit;
            } else if (delayBeforeReverse.flag) {
                if (cmdClose.status) {
                    rockoState = go_Close;
                } else if (cmdSingle.cpStatus) {
                    rockoState = go_Close;
                } else {
                    rockoState = go_OpenLimit;
                }
            } else {
                rockoState = go_OpenLimit;
            }
            break;

        case go_CloseLimit:
       motorStop();
            if ((cmdStopSw.status || cmdStopPb.status)) {
                rockoState = go_CloseLimit;
            } else if (delayBeforeReverse.flag) {
                if (cmdOpen.status) {
                    rockoState = go_Open;
                } else if (cmdAuxOpen.status) {
                    rockoState = go_Open;
                } else if (cmdSingle.cpStatus) {
                    rockoState = go_Open;
                } else {
                    rockoState = go_CloseLimit;
                }
            } else {
                rockoState = go_CloseLimit;
            }
            break;
    }


}
