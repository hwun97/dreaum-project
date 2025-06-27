#include <Arduino.h>
#include <ESP32Servo.h>

Servo myservo;

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Starting...");
  
  myservo.attach(13);  // D13 = GPIO13
  Serial.println("Servo attached");
}

void loop() {
  Serial.println("Moving to 0");
  myservo.write(0);
  delay(1000);
  
  Serial.println("Moving to 90");
  myservo.write(90);
  delay(1000);
  
  Serial.println("Moving to 180");
  myservo.write(180);
  delay(1000);
}
