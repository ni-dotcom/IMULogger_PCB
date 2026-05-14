/* Initial code to test clock, firmware upload, SWD, and GPIO
 * Blink an LED attached to pin 9
 */

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
}