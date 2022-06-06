#include "mbed.h"
#include "CAN.h"


CAN can1(PD_0, PD_1);

int main() {

    can2.frequency(500000);
    CANMessage msg;
    
    while(1) {
            ////
        printf("Invio messaggio:");
        if (can2.read(msg)) {
            printf("Messaggio ricevuto: %c ", msg.data[0]);

        } 
    ThisThread::sleep_for(1000);
    }
}
