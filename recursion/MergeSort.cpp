//
// Created by Aqib Javed on 03/01/2025.
//
#include <iostream>

using namespace std;


// Time complexity OnLog(n)
// Space complexity O(n)

void merge(vector<int>& nums, vector<int>& left, vector<int>& right) {
    int l = 0, r = 0, n = 0;
    while(l < left.size() && r < right.size()) {
      if(left[l] < right[r]) {
          nums[n++] = left[l++];
      } else {
        nums[n++] = right[r++];
      }
    }

    while(l < left.size()) {
      nums[n++] = left[l++];
    }

  while(r < right.size()) {
    nums[n++] = right[r++];
  }
}

void mergeSort(vector<int>& nums) {
  if(nums.size() <= 1)
    return;

  int mid = nums.size() / 2;
  vector<int> left(mid);
  vector<int> right(nums.size() - mid);

  copy(nums.begin(), nums.begin() + mid, left.begin());
  copy(nums.begin() + mid, nums.end(), right.begin());

  mergeSort(left);
  mergeSort(right);

  merge(nums, left, right);
}


vector<int> sortArray(vector<int>& nums) {
     mergeSort(nums);
     return nums;
}

int main() {
  vector<int> data;
  data.push_back(55);
  data.push_back(1);
  data.push_back(-6);
  data.push_back(10);
  sortArray(data);
  for(const int i : data) {
    cout << i << " ";
  }

  cout<<endl;

}


