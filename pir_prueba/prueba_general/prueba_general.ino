int timeON=1500;
void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

}

void loop() {
digitalWrite(2,HIGH);
delay(timeON);
digitalWrite(3,HIGH);
delay(timeON);
digitalWrite(4,HIGH);
delay(timeON);
digitalWrite(5,HIGH);
delay(timeON);
digitalWrite(6,HIGH);
delay(timeON);

digitalWrite(2,LOW);
delay(timeON);
digitalWrite(3,LOW);
delay(timeON);
digitalWrite(4,LOW);
delay(timeON);
digitalWrite(5,LOW);
delay(timeON);
digitalWrite(6,LOW);
delay(timeON);

}
