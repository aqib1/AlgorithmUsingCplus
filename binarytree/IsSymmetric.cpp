//
// Created by Aqib Javed on 14/01/2025.
//
#include "TreeNode.h"
#include "iostream"
using namespace std;

class IsSymmetric {
  bool isSymmetric(TreeNode* root) { return isSymmetric(root, root); }

  bool isSymmetric(TreeNode* left, TreeNode* right) {
    if (left == nullptr && right == nullptr) {
      return true;
    }

    if (left == nullptr || right == nullptr) {
      return false;
    }

    return left->val == right->val &&
           isSymmetric(left->left, right->right) &&
           isSymmetric(left->right, right->left);
  }
};