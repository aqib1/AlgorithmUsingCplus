//
// Created by Aqib Javed on 08/03/2025.
//
#include "iostream"
using namespace std;

class DutchFlagProblem {
  public:
    void sortColors(vector<int>& nums) {
      int start = 0, mid = 0, end = nums.size() - 1;
      while(mid <= end) {
        if(nums[mid] == 0) {
          swap(nums[start++], nums[mid++]);
        } else if(nums[mid] == 2) {
          swap(nums[mid], nums[end--]);
        } else {
          mid++;
        }
      }
    }
};