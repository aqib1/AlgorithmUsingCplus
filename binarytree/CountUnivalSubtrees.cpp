//
// Created by Aqib Javed on 15/01/2025.
//
#include "TreeNode.h"
#include "iostream"
using namespace std;

class CountUnivalSubTrees {
public:
    int countUnivalSubtrees(TreeNode* root) {
        int count[1];
        count[0] = 0;
        countUntil(root, count);
        return count[0];
    }

    bool countUntil(TreeNode* root, int count[]) {
        if(root == nullptr) {
              return true;
        }

        bool left = countUntil(root->left, count);
        bool right = countUntil(root->right, count);

        if(left & right) {
            if(root->left != nullptr && root->val != root->left->val) {
                return false;
            }
            if(root->right != nullptr && root->val != root->right->val) {
                return false;
            }

          count[0]++;
          return true;
        } else {
          return false;
        }
    }
};
