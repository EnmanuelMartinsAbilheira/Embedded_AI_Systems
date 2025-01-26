void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("Start!");
}

int i=0;


void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(analogRead(A0));
  Serial.print("   -   ");
  Serial.print(analogRead(A1));
  Serial.print("   -   ");
  Serial.print(analogRead(A2));
  delay(50);
}