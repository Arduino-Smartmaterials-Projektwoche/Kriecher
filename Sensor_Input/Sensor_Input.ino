int SensorPin = 5;
int SensorWert = 0;

int LedPin = 11;
int DimmWert = 0;

void setup() {
 Serial.begin(9600);
 pinMode(SensorPin, INPUT);
 pinMode(LedPin, OUTPUT);
}

void loop() {
  
  SensorWert = analogRead(SensorPin);
  DimmWert = constrain(SensorWert, 20, 600);  // Wertebereich beschränken
  DimmWert = map(DimmWert, 20, 600, 0, 255);  // Wertebereich auf 0..255 Wertebereich umrechnen
  
  analogWrite(LedPin, DimmWert);
  
  Serial.print("SensorWert: ");
  Serial.print(SensorWert);
  Serial.print("   DimmWert: : ");
  Serial.println(DimmWert);
  
  delay(30);
}
