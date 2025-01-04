//
// Created by Aqib Javed on 04/01/2025.
//

#include "iostream"
using namespace std;

// Time complexity O(n)
// Space complexity O(1)
int reverseNumber(int n) {
  int reverse = 0;

  while(n != 0) {
    reverse = (reverse * 10) + (n % 10);
    n /= 10;
  }

  return reverse;
}

// using pingala exponential algorithm
// Time complexity O(LogN)
// Space complexity O(1)
double power(int n, long pow) {
    if(pow == 0)
        return 1;
    if(pow == 1)
        return n;
    if(pow < 0)
      return 1 / power(n, -pow);

    int k = power(n, pow / 2);
    if(pow % 2 == 0)
      return k * k;
    return k * k * n;
}

int reverseExponentiation(int n) {
    // code here
    int pow = reverseNumber(n);

    return power(n, pow);
}

