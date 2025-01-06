//
// Created by Aqib Javed on 06/01/2025.
//
#include "TreeNode.h"

class Solution {
private:
  int successor(TreeNode* root) {
    root = root->right;

    while(root->left != nullptr) root = root->left;

    return root->val;
  }
  int predecessor(TreeNode* root) {
    root = root->left;

    while(root->right != nullptr) root = root->right;

    return root->val;
  }
// Time and space complexity OLog(n) or O(h)
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
      if(root == nullptr)
        return nullptr;
      if(key > root->val) {
        root->right = deleteNode(root->right, key);
      } else if(key < root->val) {
        root->left = deleteNode(root->left, key);
      } else {
        if(root->left == nullptr && root->right == nullptr) {
          root = nullptr;
        } else if(root->right != nullptr) {
          root->val = successor(root);
          root->right = deleteNode(root->right, root->val);
        } else {
          root->val = predecessor(root);
          root->left = deleteNode(root->left, root->val);
        }
      }
      return root;
    }
};