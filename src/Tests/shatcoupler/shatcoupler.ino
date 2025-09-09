#include <Servo.h>

Servo servoMotor;

// define the variables
int IR = digitalRead(2);
int n;


void setup() {
  pinMode(IR, INPUT);
  servoMotor.attach(11);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(2)==HIGH){
    if (servoMotor.read()==45)
    {
      servoMotor.write(45);
      
    }
    else
    {
       for(n=servoMotor.read();n<=45;n=n+1)
       {
          servoMotor.write(n);
          
          delay(5);
       }
    }
     delay(10); 
  }
  else
  {
    if (servoMotor.read()==0)
    {
      servoMotor.write(0);
    }
    else
    {
       for(n=servoMotor.read();n>=0;n=n-1)
       {
          servoMotor.write(n);
          delay(5);
       }
    }
      delay(10);
  }


}
