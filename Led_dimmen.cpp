void setup() {
pinMode(5,OUTPUT);  

}

void loop() {
for(int i = 0; i < 10; i++);
{
  analogWrite(5,128);
}
}
