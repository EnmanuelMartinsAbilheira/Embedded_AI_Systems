#include "Excercicio2_2.h"

//  IrisClassifier.h creates a irisClassifier object
//  that you can use to classify a fetaure vector 
//  no setup is required

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float x = analogRead(A0);
  float y = analogRead(A1);
  float z = analogRead(A2);

  float input[3] = {x, y, z};

  Serial.print("Predictions: ");

  int i = micros();
  Serial.print(irisClassifier.predict(input));
  int dt = micros() - i;
  
  Serial.print(" - ");
  Serial.println(dt);
}
