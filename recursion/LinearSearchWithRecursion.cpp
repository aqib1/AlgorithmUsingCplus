//
// Created by Aqib Javed on 16/02/2025.
//

#include "iostream"
using namespace std;

class Solution {
  public:
    int recursiveFind(vector<int> &container, int item, int index) {
      if(index == container.size())
        return -1;
      if(container[index] == item)
            return index;

      return recursiveFind(container, item, index + 1);
    }
};