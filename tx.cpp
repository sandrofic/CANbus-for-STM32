#include "mbed.h"
#include "CAN.h"

//TX
CAN can1(D30, D29); 
DigitalOut led1(LED1); 
Serial pc(USBTX, USBRX);

int main() {

    char dato=9;
    pc.baud(9600);
    can1.frequency(125000);
    
    while(1) {
            ////
        printf("Invio messaggio:");
        if (can1.write(CANMessage(0x42, &dato, 1))) {
            pc.printf("Messaggio inviato: %c ", dato);
            led1 =1;
        } 
    ThisThread::sleep_for(2.0);
    led1=0;
    }
}
