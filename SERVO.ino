#include <Servo.h>

int sen1=0,sen2=0,sen3=0,sen4=0,sen5=0;
int out1=0,out2=0,out3=0,out4=0,out5;
Servo servo1,servo2,servo3,servo4,servo5;

void setup()
{
  pinMode(A0,INPUT);
  servo1.attach(13);
  servo2.attach(8);
  servo3.attach(7);
  servo4.attach(4);
  servo5.attach(2);
}


void loop()
{
  sen1=analogRead(A0);
  out1=map(sen1,0,1023,0,90);
  servo1.write(out1);
  delay(10);
  
  sen2=analogRead(A1);
  out2=map(sen2,0,1023,0,90);
  servo2.write(out2);
  delay(10);
  
  sen3=analogRead(A3);
  out3=map(sen3,0,1023,0,90);
  servo3.write(out3);
  delay(10);
  
  sen4=analogRead(A4);
  out4=map(sen4,0,1023,0,90);
  servo4.write(out4);
  delay(10);
  
  sen5=analogRead(A5);
  out5=map(sen5,0,1023,0,90);
  servo5.write(out5);
  delay(10);
 
}