#include <Servo.h>

// Define the pin number for the sensor and servo motor
const int sensorPin = A0;
const int servoPin = 9;
int n=0;
// Create a Servo object
Servo servoMotor;

void setup() {
  // Attach the servo to the specified pin
  servoMotor.attach(servoPin);

  // Initialize the serial communication for debugging (optional)
  Serial.begin(9600);
}

void loop() {
  // Read the sensor value
  int sensorValue = analogRead(sensorPin);

  // Map the sensor value to the servo angle (0 to 45)
  if (digitalRead(sensorPin)==HIGH){
    if (servoMotor.read()==45)
    {
      servoMotor.write(45);
    }
    else
    {
       for(n=servoMotor.read();n<=45;n=n+1)
       {
          servoMotor.write(n);
          delay(10);
       }
    }
  }
 delay(1000);
 
 if (servoMotor.read()==0)
    {
      servoMotor.write(0);
    }
 else
    {
      for(n=servoMotor.read();n>=0;n=n-1)
      {
         servoMotor.write(n);
         delay(10);
      }
    }



  // Wait for a short delay before the next iteration

}