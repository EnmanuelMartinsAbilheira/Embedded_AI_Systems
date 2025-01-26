void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("Start!");
}

int i=0;

// create a dataset to train the model X Y Z Class(Normal, Horizontal, Vertical, Diagonal)
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(analogRead(A0));
  Serial.print(",");
  Serial.print(analogRead(A1));
  Serial.print(",");
  Serial.print(analogRead(A2));
  Serial.print(",");
  Serial.println("45"); // 0, 15, 30, 45, 
}