#define pirSensor 8

int reading;

void setup() {
pinMode(pirSensor,INPUT);
Serial.begin(9600);
}

void loop() {
reading = digitalRead(pirSensor);


if(reading ==HIGH){
  Serial.println("Movimiento");
}else{
  Serial.println("No hay movimiento");
  
}

}
