void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
 int a = 0;
 
void loop() {
  // put your main code here, to run repeatedly:

  Serial.print(a);
  Serial.println();
  a=a+1;
  
  
  // delay
  delay(1);
}
