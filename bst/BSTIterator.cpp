//
// Created by Aqib Javed on 04/01/2025.
//
#include "TreeNode.h"
#include "iostream"

using namespace std;

class BSTIterator {
  // Time complexity O(n)
  // Space O(n)
  vector<TreeNode*> data;
  public:
    BSTIterator(TreeNode* root) {
        inOrderFill(root, data);
    }

    void inOrderFill(TreeNode* root, vector<TreeNode*>& dataRef) {
      if(root == nullptr) return;

      inOrderFill(root->left, dataRef);
      dataRef.push_back(root);
      inOrderFill(root->right, dataRef);
    }

    // O(n)
    int next() {
        int next = data[0]->val;
        data.erase(data.begin());
        return next;
    }

    bool hasNext() {
        return !data.empty();
    }
};
