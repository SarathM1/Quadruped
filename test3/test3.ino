// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 

#define STEP_DEL 100
#define FLKU 
Servo frh;  // create servo object to control a servo 
Servo frk;  // a maximum of eight servo objects can be created 

Servo flk;
Servo flh;

Servo blk;
Servo blh;

Servo brk;
Servo brh;


void setup() 
{ 
  blh.attach(2);  // attaches the servo on pin 9 to the servo object 
  blk.attach(3);
  flh.attach(4);
  flk.attach(5);
  frk.attach(6);
  frh.attach(7);
  brh.attach(8);
  brk.attach(9);
  
  Serial.begin(9600);
} 

void loop() 
{ 
  servo_init();
  delay(STEP_DEL);
  while(1)
  {
  step_forward();
  delay(STEP_DEL);
  servo_init();
  }
  //while(1);
}

void step_forward()
{
  frk.write(0);
  delay(STEP_DEL);
  frh.write(90);
  delay(STEP_DEL);
  frk.write(120);
  delay(STEP_DEL);
  flk.write(0);
  delay(STEP_DEL);
  flh.write(30);
  delay(STEP_DEL);
  flk.write(120);
  delay(STEP_DEL);
  blh.write(90);
  while(1);
}

void servo_init()
{
  frh.write(20);
  frk.write(120);
  
  flh.write(140);
  flk.write(120);

  brh.write(45);

  blh.write(45);
  //while(1);
}

