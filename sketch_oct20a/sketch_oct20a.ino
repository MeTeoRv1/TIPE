const unsigned int TRIG_PIN=12;
const unsigned int ECHO_PIN=13;
const unsigned int BAUD_RATE=9600;

float distance;
float distance1;
float tau = 0.02;
float te = 0.001;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(BAUD_RATE);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  

 const unsigned long duration= pulseIn(ECHO_PIN, HIGH);
  distance= float(duration)/29.0/2.0;
  distance1 = distance1 + te/tau*(distance-distance1);
 Serial.print(distance1);
 Serial.print(", ");
 Serial.println(distance);

 delay(1);
 }
