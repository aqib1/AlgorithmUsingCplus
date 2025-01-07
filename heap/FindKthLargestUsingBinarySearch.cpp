//
// Created by Aqib Javed on 07/01/2025.
//
#include "iostream"
#include "vector"

using namespace std;

class KthLargest {
public:
  // Time complexity OnLog(n)
  // Space complexity O(n)
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        sort(nums.begin(), nums.end(), greater<int>());
        this->nums = nums;
    }

  // Time complexity OnLog(n)
  // Space complexity O(n)
    int add(int val) {
      int index = binarySearch(val);
      nums.insert(nums.begin() + index, val);
      return nums[k - 1];
    }

    int binarySearch(int val) {
      int left = 0;
      int right = nums.size() - 1;
      while(left <= right) {
        int mid = left + (right - left) / 2;
        if(nums[mid] == val) {
          return mid;
        }

        if (nums[mid] < val) {
          right = mid - 1;
        } else {
          left = mid + 1;
        }
      }

      return left;
    }

private:
  int k;
  vector<int> nums;
};

int main() {
  vector<int> data;
  data.push_back(4);
  data.push_back(5);
  data.push_back(8);
  data.push_back(2);
  KthLargest kth = *new KthLargest(3, data);

  cout << kth.add(3) << endl;
  return 1;
}