//
// Created by Aqib Javed on 04/01/2025.
//

#include "TreeNode.h"
#include "iostream"

using namespace std;

class BSTIterator {
  // Time complexity O(n)
  // Space O(n)
  int index;
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

    int next() {
      if(index >= data.size())
            return -1;
      int next = data[index++]->val;
      return next;
    }

    bool hasNext() {
        return index < data.size();
    }
};
