//
// Created by Aqib Javed on 04/01/2025.
//
#include "iostream"
#include "TreeNode.h"
using namespace std;

class Solution {
public:
  // Time complexity O(n)
  // Space complexity O(n)
    bool isValidBstOptimal(TreeNode* root) {
      return inOrder(root, INT64_MIN, INT64_MAX);
    }

    bool inOrder(TreeNode* root, long low, long high) {
      if(root == nullptr)
        return true;

      if(low >= root->val || high <= root->val)
        return false;

      return inOrder(root->left, low, root->val) &&
                  inOrder(root->right, root->val, high);
    }

  // Time complexity O(n) + O(n)
  // Space complexity O(n)
    bool isValidBST(TreeNode* root) {
        vector<int> data;
        inOrder(root, data);

        for(int i = 0; i < data.size() - 1; i++) {
          if(data[i] > data[i + 1]) return false;
        }

        return true;
    }

    void inOrder(TreeNode* root, vector<int>& data) {
      if(root == nullptr)
        return;

      inOrder(root->left, data);
      data.push_back(root->val);
      inOrder(root->right, data);
    }
};