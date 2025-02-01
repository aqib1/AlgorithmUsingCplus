//
// Created by Aqib Javed on 14/02/2025.
//

#include "iostream"
using namespace std;

class Solution {
public:
  int fib(int n) {
    if(n == 0 || n == 1)
      return n;
    int last = fib(n-1);
    int secondLast = fib(n-2);

    return last + secondLast;
  }
};
