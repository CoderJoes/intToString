#include <sstream>   // stringstream object

// convert integer to string, take an int,  return a string.
string intToString(int num) {
   stringstream itos;
   itos << num;
   return itos.str();
}

/* Feel free to modify as needed. Try playing around with it. Example: try converting float to string, or double to string.


Credit: Joe Ferrucci - Kronoware.com
