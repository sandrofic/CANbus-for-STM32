#include "mbed.h"
#include "CAN.h"

//TX
CAN can1(PD_0, PD_1); //(rd,tx)

// can.write = 0 if no message arrived,1 if message arrived

int main() {

    
    char msg1_data[8] = {1,2,3,4,5,6,7,8};
    
    can1.frequency(125000);
    
    while(1) {
            ////
        printf("Invio messaggi:\n");
        if (can1.write(CANMessage(0x42, msg1_data, 8))) {
            printf("Messaggio inviato\n");
        } 
    
    ThisThread::sleep_for(1s);
   
    }
}
