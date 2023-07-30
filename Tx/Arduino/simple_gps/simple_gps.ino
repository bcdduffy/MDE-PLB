#include "TinyGPS++.h"
TinyGPSPlus gps;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  if(Serial1.available()){
    char c = Serial1.read();
    gps.encode(c);
  }
  if(gps.location.isValid()){
    
    Serial.println("done");
    Serial.print("Latitude:         ");
    Serial.println(gps.location.lat(), 6);
    Serial.print("Longitude:         ");
    Serial.println(gps.location.lng(), 6);
    Serial.print("# of satellites:         ");
    Serial.println(gps.satellites.value());  
    Serial.println();  
    delay(2000);
  }
}