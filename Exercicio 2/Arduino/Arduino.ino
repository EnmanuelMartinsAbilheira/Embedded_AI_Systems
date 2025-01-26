#include "IrisClassifier.h"

//  IrisClassifier.h creates a irisClassifier object
//  that you can use to classify a fetaure vector 
//  no setup is required

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float input[4] = {5.1, 3.5, 1.4, 0.2};

  Serial.println("Predictions: ");

  int i = micros();
  Serial.print(irisClassifier.predict(input));
  int dt = micros() - i;
  
  Serial.println(" - ");
  Serial.println(dt);
}