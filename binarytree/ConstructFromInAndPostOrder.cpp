//
// Created by Aqib Javed on 29/01/2025.
//

#include "iostream"
#include "TreeNode.h"
#include "map"
using namespace std;

class ConstructFromInAndPostOrder {
  private:
    int postorderIndex;
    vector<int> postorder;
    map<int, int> inorderIndex;

    // Time complexity O(n)
    // Spacec complexity O(n)
  public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      this->postorder = postorder;
      this->postorderIndex = postorder.size() - 1;
      int inIndex = 0;
      for(int in: inorder) {
         this->inorderIndex[in] = inIndex++;
      }

      return this->helper(0, inorder.size() - 1);
    }

    TreeNode* helper(int left, int right) {
      if(left > right) return nullptr;

      TreeNode* root = new TreeNode(this->postorder[postorderIndex--]);
      int rootIndex = this->inorderIndex[root->val];
      root->right = helper(rootIndex + 1, right);
      root->left = helper(left, rootIndex - 1);

      return root;
    }
};
