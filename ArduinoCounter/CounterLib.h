#include "namespaces.h"
#include <Arduino.h>

using namespace datatypes;

class CounterClass
{
  public:
    void init();
    c_type getCount();
};
