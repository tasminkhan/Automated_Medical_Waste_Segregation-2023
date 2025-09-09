#include <Servo.h>

// Define the pin number for the sensor and servo motor
const int sensorPin = A0;
const int servoPin = 9;
const int servoPin2 =10;
const int sensorPin2 = A1;
const int trigPin = 7;
const int echoPin = 8;
int n=0;
// Create a Servo object
Servo servoMotor;
Servo servoMotor2;
void setup() {
  // Attach the servo to the specified pin
  servoMotor.attach(servoPin);
  // Initialize the serial communication for debugging (optional)
  Serial.begin(9600);
}

void loop() {
  // Read the sensor value


  // Map the sensor value to the servo angle (0 to 45)

       for(n=servoMotor.read();n<=45;n=n+1)
       {
          servoMotor.write(n);
          
          delay(5);
       }
     delay(1000); 
 
         for(n=servoMotor.read();n>=0;n=n-1)
       {
          servoMotor.write(n);
          
          delay(5);
       }
     delay(1000); 
  }


  // Wait for a short delay before the next iteration

