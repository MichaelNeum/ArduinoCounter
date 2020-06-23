#include "CounterLib.h"

void CounterClass::init() {
  TCCR1B |= registerDefinitions::useExternalClockB;
  TCCR1A &= registerDefinitions::useExternalClockA;
}

c_type CounterClass::getCount() {
  c_type returnValue = TCNT1;
  return returnValue;
}
