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
    BSTIterator(TreeNode* root) {
        insertLeftNodes(root);
    }

    void insertLeftNodes(TreeNode* root) {
      while(root != nullptr) {
        stack.push(root);
        root = root->left;
      }
    }

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