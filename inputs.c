#include "inputs.h"

void commandFilter(bool getInput, struct command *commandName) {
    if (commandName->contactType == 0) {
        if (!getInput) {
            if (commandName->debounceFilter < commandName->debounceTime) {
                ++commandName->debounceFilter;
                commandName->status = 0;
                commandName->cpStatus = 0;
            } else if (commandName->debounceFilter == commandName->debounceTime) {
                commandName->debounceFilter = commandName->debounceTime + 1;
                commandName->status = 1;
                commandName->cpStatus = 1;
            } else {
                commandName->debounceFilter = commandName->debounceTime + 1;
                commandName->cpStatus = 0;
                //  commandName->status = 0;
            }

        } else {
            commandName->debounceFilter = 0;
            commandName->status = 0;
            commandName->cpStatus = 0;
            commandName->messageFlag = 0;
        }
    }
    if (commandName->contactType == 1) {
        if (getInput) {
            if (commandName->debounceFilter < commandName->debounceTime) {
                ++commandName->debounceFilter;
                commandName->status = 0;
                commandName->cpStatus = 0;
            } else if (commandName->debounceFilter == commandName->debounceTime) {
                commandName->debounceFilter = commandName->debounceTime + 1;
                commandName->status = 1;
                commandName->cpStatus = 1;
            } else {
                commandName->debounceFilter = commandName->debounceTime + 1;
                commandName->cpStatus = 1;
            }
        } else {
            commandName->debounceFilter = 0;
            commandName->status = 0;
            commandName->cpStatus = 0;
            commandName->messageFlag = 0;
        }
    }
}

void inputs() {
    commandFilter(openPB_GetValue(), &cmdOpen);
    commandFilter(closePB_GetValue(), &cmdClose);
    commandFilter(reversePB_GetValue(), &cmdReverse);
    commandFilter(auxOpenPB_GetValue(), &cmdAuxOpen);
    commandFilter(stopPB_GetValue(), &cmdStopPb);
    commandFilter(stopSW_GetValue(), &cmdStopSw);
    commandFilter(singlePB_GetValue(), &cmdSingle);

    commandFilter(openLim_GetValue(), &openLimit);
    commandFilter(closeLim_GetValue(), &closeLimit);
}