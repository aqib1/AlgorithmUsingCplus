//
// Created by Aqib Javed on 05/01/2025.
//

#include "TreeNode.h"
#include "iostream"

using namespace std;

class Solution {
// Time complexity O(h)
// Space complexity O(1)

/**
* Question:
*
* If you do not know the height of the BST h but you are given the
* total number of nodes N of the BST, can you express the time
* complexity and space complexity using N instead of h?
*
* Answer:
* Best-case -> OLog(N)
* Worst-case -> O(N)
*/
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