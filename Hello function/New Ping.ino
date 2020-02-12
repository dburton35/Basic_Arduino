#include <NewPing.h>
#include <Arduino.h>
#define TRIGGER_PIN 11
#define ECHO_PIN 10
#define MAX_DISTANCE 200
 
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
 Serial.begin(9600);
}
 
void loop() {
     Serial.println(myHCSR04.ping_cm());
     delay(50); 
}