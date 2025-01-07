//
// Created by Aqib Javed on 07/01/2025.
//
#include "iostream"
using namespace std;

class KthLargest {

  // Time complexity OnLog(K)
  KthLargest(int k, vector<int>& nums) {
       this->k = k;

       for(int num: nums) {
         add(num);
       }
  }

  // Time complexity OLog(K)
  // Space complexity O(K)
  int add(int val) {
    if(minHeap.size() < k) {
      minHeap.push(val);
    } else if(val > minHeap.top()) {
      minHeap.pop();
      minHeap.push(val);
    }

    return minHeap.top();
  }

private:
  int k;
  priority_queue< int, vector<int>, greater<int> > minHeap;
};