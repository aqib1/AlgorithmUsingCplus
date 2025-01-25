//
// Created by Aqib Javed on 14/02/2025.
//
#include "iostream"
using namespace std;

class HeadRecursion {
public:
  static void head(const int n) {
    if(n == 0) return;

    head(n - 1);
    // backtracking
    /*
     * let assume input is 3,
     * 3, 2, 1, 0 (recursive call)
     * in case of 0 it will return
     * as call to recursive method is n-1,
     * so first value will be printed is 1
     * then backtrack to 2 and 3.
     * */

    cout<<n<<endl;
  }
};

int main() {
  HeadRecursion recursion;
  recursion.head(3);
  return 0;
}