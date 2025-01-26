//
// Created by Aqib Javed on 14/02/2025.
//
#include "iostream"
using namespace std;

class TailRecursion {
  public:
    void tailRecursion(int n) {
      if(n == 0) return;

      cout<<n<<endl;

      tailRecursion(n - 1);
    }
};

int main() {
  TailRecursion tail;
  tail.tailRecursion(5);
  return 0;
}