int R=5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(R,INPUT);
}
void reed()
{
  if (digitalRead(R)==LOW)
  {Serial.println("Open the door");
}
else{
  Serial.println("Close the door");
}
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Digital Reed sensor");
  delay(100);
  while(1)
  {
    reed();
  }

}
