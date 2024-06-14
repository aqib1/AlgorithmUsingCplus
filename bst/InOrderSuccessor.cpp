//
// Created by Aqib Javed on 04/01/2025.
//

#include "TreeNode.h"
#include "iostream"
using namespace std;

class InOrderSuccessor {
  // Time complexity O(n)
  // Space complexity O(n)
  public:
    TreeNode* successor(TreeNode* root, TreeNode* p) {
      TreeNode* successor = nullptr;
      while (root != nullptr) {
        if (p->val > root->val) {
            root = root->right;
        } else {
          successor = root;
          root = root->left;
        }
      }
      return successor;
    }


  // Time complexity O(n) + O(n) = O2(n)
  // Space complexity O(n)
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
      vector<TreeNode*> nodes;
      inOrder(root, nodes);
      for(int i = 0; i < nodes.size() - 1; i++) {
        if(p->val == nodes[i]->val) {
          return nodes[i + 1];
        }
      }
      return nullptr;
    }

    void inOrder(TreeNode* root, vector<TreeNode*>& nodes) {
        if(root == nullptr) return;
        inOrder(root->left, nodes);
        if(root != nullptr)
          nodes.push_back(root);
        inOrder(root->right, nodes);
    }
};


int main() {
  TreeNode node = TreeNode(2);
  TreeNode left = TreeNode(1);
  TreeNode right = TreeNode(3);
  node.left = &left;
  node.right = &right;

  InOrderSuccessor obj = InOrderSuccessor();
  const TreeNode* res = obj.inorderSuccessor(&node, &left);
  cout << res->val;

  return 0;
}
