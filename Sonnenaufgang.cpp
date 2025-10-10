int i;

void setup() {
pinMode(5,OUTPUT);  

}

void loop() {
for(i = 0; i < 256; i++)
{
  analogWrite(5,i);

}
}
