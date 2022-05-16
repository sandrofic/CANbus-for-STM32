#include "mbed.h"
#include "CAN.h"

//TX
using ThisThread::sleep_for;

CAN can2(D9, D10);
DigitalOut led1(LED1); 
Serial pc(USBTX, USBRX);
int main() {

    pc.baud(9600);
    can2.frequency(125000);
    CANMessage msg;
    
    while(1) {
            ////
        printf("Invio messaggio:");
        if (can2.read(msg)) {
            pc.printf("Messaggio ricevuto: %c ", msg.data[0]);
            led1 = 1;
        } 
    led1=0;
    ThisThread::sleep_for(1000);
    }
}
