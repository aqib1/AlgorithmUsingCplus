//
// Created by Aqib Javed on 04/01/2025.
//
#include "iostream"
using namespace std;

// Time complexity OLog(n) if array is sorted
// Space complexity O(1)
int findK(vector<int>& data, int left, int right, int k) {
    if(left >= right) {
      return -1;
    }
    const int mid = left + (right - left) / 2;
    if(data[mid] < k) {
      return findK(data, mid + 1, right, k);
    }
    if(data[mid] > k) {
        return findK(data, left, mid, k);
    }
    return data[mid];
}

int main() {
    vector<int> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(6);
    data.push_back(10);

    cout << findK(data, 0, data.size(), 10);
}