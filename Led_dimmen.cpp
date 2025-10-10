void setup() {      //Hier nur Pins 3,5,6,9,10,11
pinMode(5,OUTPUT);  

}

void loop() {
for(int i = 0; i < 10; i++);
{
  analogWrite(5,128);
}
}
