//
// Created by Aqib Javed on 11/01/2025.
//
#include "iostream"
using namespace std;

class ConstructKPalindromeStrings {
public:
  bool canConstruct(const string s, const int k) {
      if (s.length() < k)
          return false;

      int count[26];
      int oddFreqCount = 0;

      for (const char& d : s)
          count[d - 'a']++;

      for (const char c : count)
          if (c % 2 != 0)
              oddFreqCount++;

      return oddFreqCount <= k;
  }
};