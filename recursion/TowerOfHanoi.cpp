//
// Created by Aqib Javed on 14/02/2025.
//
#include "iostream"
using namespace std;

// Time complexity of tower of hanoi is O(2^n) and space O(n)
class Solution {
public:
  int count = 0;
  int solve(int n, int from, int to, int aux) {
    if(n == 0)
      return 0;
      solve(n-1, from, aux, to);
      count++;
      cout<<"move disk "<<n<<" from rod "<<from<<" to rod " << to << endl;
      solve(n-1, aux, to, from);
     return count;
  }
};
