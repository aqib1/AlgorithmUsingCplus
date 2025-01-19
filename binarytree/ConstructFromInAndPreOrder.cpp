//
// Created by Aqib Javed on 30/01/2025.
//
#include "TreeNode.h"
#include "iostream"
#include "map"
using namespace std;

// Time complexity O(n)
// Space complexity O(n)
class ConstructFromInAndPreOrder {
private:
  int preorderIndex;
  vector<int> preorder;
  map<int, int> inorderIndex;

public:
  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    this->preorder = preorder;
    int index = 0;
    for(int in: inorder) inorderIndex[in] = index++;

    return this->helper(0, preorder.size() - 1);
  }

  TreeNode* helper(int left, int right) {
    if(left > right)
      return nullptr;

    TreeNode* root = new TreeNode(this->preorder[preorderIndex++]);
    int rootIndex = this->inorderIndex[root->val];
    root->left = helper(left, rootIndex - 1);
    root->right = helper(rootIndex + 1, right);

    return root;
  }
};