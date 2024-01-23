//
// Created by Aqib Javed on 13/01/2025.
//
#include "TreeNode.h"
#include "iostream"
using namespace std;

class PostorderTraversal {
public:
  void postorder(TreeNode* root, vector<int> &result) {
    if(root == nullptr) {
      return;
    }
    postorder(root->left, result);
    postorder(root->right, result);

    result.push_back(root->val);
  }

  // Time complexity O(n)
  // Space complexity O(n)
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    postorder(root, result);
    return result;
  }
};