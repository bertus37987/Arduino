int led = 3;
int pwm;
const int ldr = A0;
void setup() {
  
}

void loop() {
int helligkeit = analogRead(ldr);
pwm = map(helligkeit,0, 1023, 255, 0);
analogWrite(led, pwm);

}
