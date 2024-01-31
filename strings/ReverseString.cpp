//
// Created by Aqib Javed on 13/01/2025.
//
#include "iostream"
using namespace std;

class ReverseString {
public:
     // Time complexity O(n)
    // Space complexity O(1)
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;

        while(start < end) {
            char tmp = s[start];
            s[start++] = s[end];
            s[end--] = tmp;
        }
    }
};