//
// Created by Aqib Javed on 13/01/2025.
//

#include "iostream"

struct TreeNode {
  int val;
  TreeNode *right;
  TreeNode *left;
  TreeNode(): val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left(left), right(right) {}
};
