```
//====================================================================
// GetCSV.h - Description and Usage
// Dave Gillen - davebuildsthings.ca
// Written April 2, 2023
// This library and sample code is open source and free to use/modify.
//====================================================================

// GetCSV.h is a simple library used to extract values from a CSV string or count the number of
// values contained in a CSV string.
//
// GetCSV.Value(String value, char separator, int position) returns a String value for the position
// Returns "NULL" if the string is not found.
//
// GetCSV.Count(String value, char separator) returns an int of the total
// 
// NOTE: csv values made up with missing values between commas will not be interpreted correctly!
//       Eg. csv = "1,2,,3,4" / Must be csv = "1,2, ,3,4"
//                  ---^----

#include <GetCSV.h>

void setup() {
  Serial.begin(115200);
  
  String csv_value1 = "This,does,work!";
  Serial.print("First CSV string (csv_value1) = ");
  Serial.println(csv_value1);
  Serial.print("GetCSV.Value(csv_value1, ',', 0) = ");
  Serial.println(GetCSV.Value(csv_value1, ',', 0));     // Prints the CSV text value
  Serial.print("GetCSV.Value(csv_value1, ',', 1) = ");
  Serial.println(GetCSV.Value(csv_value1, ',', 1));     // Prints the CSV text value
  Serial.print("GetCSV.Value(csv_value1, ',', 2) = ");
  Serial.println(GetCSV.Value(csv_value1, ',', 2));     // Prints the CSV text value
  Serial.print("GetCSV.Value(csv_value1, ',', 3) = ");
  Serial.println(GetCSV.Value(csv_value1, ',', 3));     // Prints the CSV text value
  Serial.println("(Unfound String values return NULL.)");
  Serial.println("Number of words in the first csv string is: ");
  Serial.print("GetCSV.Count(csv_value1, ',') = ");
  Serial.println(GetCSV.Count(csv_value1, ','));     // Prints the CSV text count value
  
  Serial.println("----------------");
  
  String csv_value2 = "22,33,44,55,66";
  Serial.print("Second CSV string (csv_value2) = ");
  Serial.println(csv_value2);
  Serial.print("GetCSV.Value(csv_value2, ',', 0)).toInt() = ");
  Serial.println(GetCSV.Value(csv_value2, ',', 0).toInt());     // Prints the CSV text value converted to int
  Serial.print("GetCSV.Value(csv_value2, ',', 1)).toInt() = ");
  Serial.println(GetCSV.Value(csv_value2, ',', 1).toInt());     // Prints the CSV text value converted to int
  Serial.print("GetCSV.Value(csv_value2, ',', 2)).toInt() = ");
  Serial.println(GetCSV.Value(csv_value2, ',', 2).toInt());     // Prints the CSV text value converted to int
  Serial.print("GetCSV.Value(csv_value2, ',', 3)).toInt() = ");
  Serial.println(GetCSV.Value(csv_value2, ',', 3).toInt());     // Prints the CSV text value converted to int
  Serial.print("GetCSV.Value(csv_value2, ',', 4)).toInt() = ");
  Serial.println(GetCSV.Value(csv_value2, ',', 4).toInt());     // Prints the CSV text value converted to int
  Serial.print("GetCSV.Value(csv_value2, ',', 5)).toInt() = ");
  Serial.println(GetCSV.Value(csv_value2, ',', 5).toInt());     // Prints the CSV text value converted to int
  Serial.println("(Unfound values return 0 if converted to int.)");
  Serial.println("Number of words in the second csv string is: ");
  Serial.print("GetCSV.Count(csv_value2, ',') = ");
  Serial.println(GetCSV.Count(csv_value2, ','));     // Prints the CSV text count value

  Serial.println("----------------");
  
  String csv_value3 = "dog,cat,mouse,";
  Serial.print("Third CSV string (csv_value3) = ");
  Serial.println(csv_value3);
  Serial.println("(Ending comma added.)");
  Serial.print("GetCSV.Count(csv_value3, ',') = ");
  Serial.println(GetCSV.Count(csv_value3, ','));     // Prints the CSV text count value

}

void loop() {
  // put your main code here, to run repeatedly:
}
```
