/*
 * Project_Title: Robotic Hand Control
 * Author: M.S.U. Faisal
 * Date  : 09.05.17
 */
 

#include <Servo.h>

Servo miniservo; 
int direc = 0;    

void setup() {
  miniservo.attach(7); 
  pinMode(A0, INPUT);  
}

void loop() {
  int pir_value = analogRead(A0);
  if(pir_value>=675){
    for (direc = 0; direc <= 90; direc += 1) { 
    miniservo.write(direc);              
    delay(10);          
    }
    delay(3000);
    for (direc = 90; direc >= 0; direc -= 1) { 
    miniservo.write(direc);             
    delay(10); 
    }
 }
}

