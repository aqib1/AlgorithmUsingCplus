//
// Created by Aqib Javed on 05/01/2025.
//

#include "TreeNode.h"
#include "iostream"

using namespace std;

class Solution {
// Time complexity O(h)
// Space complexity O(1)
public:
  TreeNode* searchBST(TreeNode* root, int val) {
    while(root != nullptr) {
      if(root->val == val) {
        return root;
      }

      if(val > root->val) root = root->right;
      else root = root->left;

    }
    return nullptr;
  }
};