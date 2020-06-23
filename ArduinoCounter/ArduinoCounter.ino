#include "CounterLib.h"

#define OutputPin 6
#define ButtonPin 3
constexpr int delayTime = 10;

CounterClass CC;

void setup() {
  Serial.begin(9600);
  pinMode(OutputPin, OUTPUT);
  pinMode(ButtonPin, INPUT_PULLUP);
  CC.init();
}

void loop() {
  bool buttonState = digitalRead(ButtonPin);
  Serial.println(CC.getCount());
  digitalWrite(OutputPin, buttonState && millis()%delayTime < (delayTime/2));
}
