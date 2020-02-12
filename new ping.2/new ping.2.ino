#include <NewPing.h>
#include <Arduino.h>
#define TRIGGER_PIN 11
#define ECHO_PIN 10
#define MAX_DISTANCE 200
int dist;
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
 Serial.begin(9600);
 pinMode(6, OUTPUT);
}
 
void loop() {
     Serial.println(myHCSR04.ping_cm());
     dist = myHCSR04.ping_cm();
     if (dist < 10){
     	digitalWrite(6, HIGH);
     }
     else {
     	digitalWrite(6, LOW);
     }
    }