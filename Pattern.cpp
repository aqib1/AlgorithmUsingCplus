//
// Created by Aqib Javed on 03/01/2025.
//
#include "iostream"
using namespace std;

void printPattern() {
  int limit = 1;
  int current = 1;
  int max = 4;
  for(int i = 0; i < max; i++) {
      for(int j = 0; j < max - limit; j++) {
        cout << " ";
      }
      for(int k = 0; k < limit; k++) {
        cout << current++;
      }
      cout << endl;
    limit++;
  }
}

int main() {
  printPattern();
  return 0;
}