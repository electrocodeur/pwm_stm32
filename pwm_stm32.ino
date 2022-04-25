int ledpwm = PA9;
void setup() {
  pinMode(ledpwm, OUTPUT);
}

void loop() {
  analogWrite(ledpwm, 0);//0
  delay(3000);
  analogWrite(ledpwm, 16384);//25%
  delay(3000);
  analogWrite(ledpwm, 32768);//50%
  delay(3000);
  analogWrite(ledpwm, 49152);//75%
  delay(3000);
  analogWrite(ledpwm, 65535);//100%
  delay(3000);
}
