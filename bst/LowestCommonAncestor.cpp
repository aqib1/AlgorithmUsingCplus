//
// Created by Aqib Javed on 10/01/2025.
//

#include "TreeNode.h"
#include "iostream"
using namespace std;
class Solution {
public:

    // Time complexity OLog(N)
    // Space complexity OLog(N)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root == nullptr) return nullptr;

        if(p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        } else if(p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }

        return root;
     }

    // Time complexity O(1)
    // Space complexity OLog(N)
    TreeNode* lowestCommonAncestorIterative(TreeNode* root, TreeNode* p, TreeNode* q) {

      while(root != nullptr) {
          if(p->val > root->val && q->val > root->val) {
              root = root->right;
          } else if(p->val < root->val && q->val < root->val) {
              root = root->left;
          } else {
               return root;
            }
      }

      return nullptr;
    }
};
