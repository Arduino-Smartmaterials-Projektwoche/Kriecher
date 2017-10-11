int PotiPin = 5;
int PotiWert = 0;

int LedPin = 11;
int DimmWert = 0;

void setup() {
 Serial.begin(9600);
 pinMode(PotiPin, INPUT);
 pinMode(LedPin, OUTPUT);
}

void loop() {
  
  PotiWert = analogRead(PotiPin);
  DimmWert = map(PotiWert, 0, 1023, 0, 255);
  
  analogWrite(LedPin, DimmWert);
  
  Serial.print("PotiWert: ");
  Serial.print(PotiWert);
  Serial.print("   DimmWert: : ");
  Serial.println(DimmWert);
  
  delay(30);
}
