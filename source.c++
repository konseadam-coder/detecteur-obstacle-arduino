
const int buzzer = 8;
const int trig_pin = 9;
const int echo_pin = 10;
float timing = 0.0;
float distance = 0.0;
const int ledPin = 12; 
const int ldrPin = A0;

void setup()
{
  pinMode(echo_pin, INPUT);
  pinMode(trig_pin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  digitalWrite(trig_pin, LOW);
  digitalWrite(buzzer, LOW);
    
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  
  timing = pulseIn(echo_pin, HIGH);
  distance = (timing * 0.034) / 2;
  
  Serial.print("Dist: ");
  Serial.print(distance);
  Serial.println("cm");
      
  if (distance <= 50) {
  	tone(buzzer, 500); 
  } else {
  	noTone(buzzer);
  }
  int ldrStatus = analogRead(ldrPin);
  
  Serial.print("LDR: ");
  Serial.println(ldrStatus);
   
  if (ldrStatus <= 80) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}