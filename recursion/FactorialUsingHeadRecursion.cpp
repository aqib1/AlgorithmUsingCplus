//
// Created by Aqib Javed on 14/02/2025.
//
#include "iostream"
using namespace std;

class FactorialUsingHeadRecursion {
public:
  static int factorial(const int n) {
       if(n == 1)
         return 1;

       const int number = factorial(n - 1);
       const int result = n * number;

       return result;
     }
};

int main() {
  FactorialUsingHeadRecursion r;
  cout<<r.factorial(5)<<endl;
  return 0;
}