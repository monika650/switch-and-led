//active low input switch and led
void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT_PULLUP);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(7)==LOW)
  {
    digitalWrite(10,HIGH);
    delay(250);
    digitalWrite(10,LOW);
    delay(250);
    digitalWrite(10,HIGH);
    delay(250);  
    digitalWrite(10,LOW);
    }
} 
