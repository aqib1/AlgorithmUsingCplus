//
// Created by Aqib Javed on 13/01/2025.
//
#include "TreeNode.h"
#include "iostream"
using namespace std;

class LevelOrder {
 public:
   vector<vector<int> > levelOrder(TreeNode* root) {
       vector<vector<int> > response;
       preorder(root, response, 0);
       return response;
   }

   void preorder(TreeNode* root, vector<vector<int> >& response, int height) {
     if(root == nullptr) {
       return;
     }
     if(response.size() == height) {
       response.emplace_back();
     }

     response[height].push_back(root->val);
     preorder(root->left, response, height);
     preorder(root->right, response, height);
   }
};