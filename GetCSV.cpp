#include "GetCSV.h"

//==================================================
//                  GetCSV.h
//          Routine used to parse CSV
//==================================================

// -------------------------------------------------
// Returns the CSV value at a given position index
// Returns NULL if no value is found
// -------------------------------------------------

String _GetCSV::Value(String data, char separator, int index) {
    int found = 0;
    int strIndex[] = {0, -1};
    int maxIndex = data.length()-1;
    for(int i=0; i<=maxIndex && found<=index; i++){
      if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
      }
    }  
    return found>index ? data.substring(strIndex[0], strIndex[1]) : "NULL";
  }
  
// -------------------------------------------------
// Returns the number of objects in the CSV string
// -------------------------------------------------

int _GetCSV::Count(String data, char separator) {
    int csvLength;
    int thelength = data.length() - 1;
    if(data.charAt(thelength) == separator) csvLength = 0; else csvLength = 1;
    for(int i=0; i<=thelength; i++) {
      if(data.charAt(i) == separator) {
          csvLength++;
      }      
    }
    return csvLength;
  }

_GetCSV GetCSV;