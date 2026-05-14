/* Checks SDA/SCL, pullups, sensor power */

#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(115200);

  Serial.println("Scanning...");
  
  for (byte addr = 1; addr < 127; addr++) {
    Wire.beginTransmission(addr);

    if (Wire.endTransmission() == 0) {
      Serial.print("Found: 0x");
      Serial.println(addr, HEX);
    }
  }
}

void loop() {}