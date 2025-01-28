//
// Created by Aqib Javed on 14/02/2025.
//
#include "iostream"
using namespace std;

class FactorialUsingTailRecursion {
public:
  static int tail(const int n) {
    return tail(n, 1);
  }

private:
  static int tail(const int n,const int accumulator) {
      if(n == 1)
        return accumulator;

      return tail(n - 1, n * accumulator);
  }
};

int main() {
  FactorialUsingTailRecursion r;
  cout<<r.tail(5)<<endl;
  return 0;
}