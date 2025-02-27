//
// Created by Aqib Javed on 28/02/2025.
//
#include "iostream"
#include "map"
using namespace std;

class TwoSum {
  public:
  // Time complexity O(n) and space O(n)
    vector<int> twoSum(
        vector<int>& nums,
        int target
     ) {
      unordered_map<int, int> hash;
      vector<int> res;
      for (int i = 0; i < nums.size(); i++) {
        hash[nums[i]] = i;
      }
      for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hash.find(complement) != hash.end() && hash[complement] != i) {
          res.push_back(i);
          res.push_back(hash[complement]);
          return res;
        }
      }
      // If no valid pair is found, return an empty vector
      return res;
    }
};

int main() {
  TwoSum twosum = *new TwoSum();
  vector<int> data;
  data.push_back(1);
  data.push_back(3);
  data.push_back(4);
  vector<int> result = twosum.twoSum(data, 7);
  cout<<result[0]<<endl;
  cout<<result[1]<<endl;
  return 0;
}