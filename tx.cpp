#include "mbed.h" 
#include "CAN.h" 
#include "InterfaceCAN.h"
 
//TX 
CAN can1(PD_0,PD_1);  
//DigitalOut led1(LED1);  
char dato = 5;
int main() { 
  
  // pc.baud(115200);// velocità dei pacchetti  
    can1.frequency(125000);//freq del canbus 
     
    while(1) { 
             
        printf("Invio messaggio:\n");
        can1.write(CANMessage(25, &dato, 8));
        printf("Messaggio inviato: %d \n ", dato);
        HAL_Delay(1000);
       // if (can1.write(CANMessage(25, &dato, 8))) { 
           // printf("Messaggio inviato: %d \n ", dato); 
           // led1 = 1; 
        }  
    //HAL_Delay(1000); 
     
    //led1=0; 
    //HAL_Delay(1000); 
    
   // } 
}
