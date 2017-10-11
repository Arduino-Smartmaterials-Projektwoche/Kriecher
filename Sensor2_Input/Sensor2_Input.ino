int SensorPin = 5;
int SensorRefPin = 4;

int SensorWert = 0;     //  Sensor-Wert
int SensorRefWert = 0;  // Sensor-Referenzwert


int LedPin = 11;
int DimmWert = 0;

void setup() {
 Serial.begin(9600);
 pinMode(SensorPin, INPUT);
 pinMode(SensorRefPin, INPUT);
 pinMode(LedPin, OUTPUT);
}

void loop() {
  
  SensorWert = analogRead(SensorPin);
  SensorRefWert = analogRead(SensorRefPin);
  DimmWert = constrain(SensorWert, SensorRefWert - 20, SensorRefWert - 400);  // Wertebereich beschränken
  DimmWert = map(DimmWert, SensorRefWert - 20, SensorRefWert - 400, 0, 255);  // Wertebereich auf 0..255 Wertebereich umrechnen
  
  analogWrite(LedPin, DimmWert);
  
  Serial.print("SensorWert: ");
  Serial.print(SensorWert);
  Serial.print(", Referenzwert: ");
  Serial.print(SensorRefWert);
  Serial.print(", DimmWert: ");
  Serial.println(DimmWert);
  
  delay(30);
}
