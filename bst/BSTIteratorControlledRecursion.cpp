//
// Created by Aqib Javed on 04/01/2025.
//

#include "TreeNode.h"
#include "iostream"
#include "stack"

using namespace std;

class BSTIterator {
public:
    stack<TreeNode*> stack;
    // time complexity O(k) where k is nearly constant
    // Space complexity O(n)
    BSTIterator(TreeNode* root) {
        insertLeftNodes(root);
    }

    void insertLeftNodes(TreeNode* root) {
      while(root != nullptr) {
        stack.push(root);
        root = root->left;
      }
    }

    // time complexity O(k) where k is nearly constant
    int next() {
        TreeNode* pop = stack.top();
        stack.pop();

        if(pop->right != nullptr)
          insertLeftNodes(pop->right);

        return pop->val;
    }

    bool hasNext() {
      return !stack.empty();
    }
};