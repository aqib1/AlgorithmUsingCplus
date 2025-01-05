#include "TreeNode.h"


class Solution {

  // time complexity best-case/avg OLog(N) or O(h) and O(n) in worst-case
  // Space complexity best-case/avg OLog(N) or O(h) and O(n) in worst-case
private:
  void addChildNodes(TreeNode* root, int val) {
    if(val > root->val) {
        if(root->right == nullptr) {
            root->right = new TreeNode(val);
        } else {
          addChildNodes(root->right, val);
        }
    } else {
        if(root->left == nullptr) {
            root->left = new TreeNode(val);
        } else {
          addChildNodes(root->left, val);
        }
     }
  }

public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr)
          root = new TreeNode(val);
        else
          addChildNodes(root, val);

        return root;
    }
};