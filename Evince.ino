#include <Servo.h>
Servo ser,ser1;
int incoming[2];

void setup(){
    pinMode(10,OUTPUT);
     pinMode(11,OUTPUT);
     ser.attach(11);//manda energia para a porta 11
    ser1.attach(10);  
  Serial.begin(9600);
}

void loop(){
  while(Serial.available() >= 2){
    
    for (int i = 0; i < 2; i++){
       
      incoming[i] = Serial.read();
    }
   
  ser.write(incoming[0]);
  ser1.write(incoming[1]);
  
  
  
}
}
