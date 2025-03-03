
#include "safety.h"





void resistive_safetyCheck(uint16_t adcValue, struct Obstruction *safety) {

//    adcValue = safety->ADC;
//    if ((safety->ADC > 600) && (safety->ADC < 800)) {
//         safety->sampleCount++;
//    } else {
//        safety->sampleCount = 0;  // Reset if the value is out of range
//    }
//
//    if (safety->sampleCount >= safety->sampleLimit) {  
//        safety->resistive_status = 1;
//    } else {
//        safety->resistive_status = 0;
//    }

    
     if ((adcValue > 600) &&(adcValue < 800)){
         safety ->resistive_status =1;
     } else{
          safety ->resistive_status =0;
     }
}


void closeSafety_check(){
    resistive_safetyCheck(ADC_ChannelSelectAndConvert(SAFETY1_RES),&closeSafety1);

    resistive_safetyCheck(ADC_ChannelSelectAndConvert(SAFETY2_RES),&closeSafety2); 

    
    
}

void openSafety_check(){
    resistive_safetyCheck(ADC_ChannelSelectAndConvert(SAFETY3_RES),&openSafety1);

    resistive_safetyCheck(ADC_ChannelSelectAndConvert(SAFETY4_RES),&openSafety2); 

    
}