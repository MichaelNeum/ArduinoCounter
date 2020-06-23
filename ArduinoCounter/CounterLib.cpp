#include "CounterLib.h"

void CounterClass::init() {
  TCCR1B |= registerDefinitions::useExternalClock;
}

c_type CounterClass::getCount() {
  c_type returnValue = TCNT1;
  return returnValue;
}
