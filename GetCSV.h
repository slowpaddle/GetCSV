#ifndef GetCSV_h
#define GetCSV_h

#include "Arduino.h"

class _GetCSV {
  public:
    String Value(String data, char separator, int index);
    int Count(String data, char separator);
    
};
extern _GetCSV GetCSV;

#endif