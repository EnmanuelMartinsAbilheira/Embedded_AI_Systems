#include "cnn.h"
#include <tflm_esp32.h>
#include <eloquent_tinyml.h>
#define ARENA_SIZE 2000 // this is trial-and-error process
Eloquent::TF::Sequential<TF_NUM_OPS, ARENA_SIZE> tf;


void setup() {
   Serial.begin(115200);
   delay(3000);
   Serial.println("__TENSORFLOW IRIS__");
   // configure input/output
   tf.setNumInputs(4);
   tf.setNumOutputs(3);
   // add required ops
   tf.resolver.AddFullyConnected();
   tf.resolver.AddSoftmax();
   while (!tf.begin(irisModel).isOk()) 
       Serial.println(tf.exception.toString());
}


void loop() {
   // classify class 0
   if (!tf.predict(x0).isOk()) {
       Serial.println(tf.exception.toString());
       return;
   }
   
   Serial.print("expected class 0, predicted class ");
   Serial.println(tf.classification);
   
   // how long does it take to run a single prediction?
   Serial.print(tf.benchmark.microseconds());
   Serial.println("us");
   
   delay(1000);
}

