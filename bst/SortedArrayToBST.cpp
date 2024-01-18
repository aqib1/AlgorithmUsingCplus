//
// Created by Aqib Javed on 12/01/2025.
//
#include "TreeNode.h"
#include "iostream"
using namespace std;

class SortedArrayToBST {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bst(nums, 0, nums.size() - 1);
    }

    // Time complexity O(N)
    // Space complexity OLog(N)
    TreeNode* bst(vector<int>& nums, int low, int high) {
      if(low > high)
        return nullptr;

      int mid = low + (high - low) / 2;
      TreeNode* root = new TreeNode(nums[mid]);
      root->left = bst(nums, low, mid - 1);
      root->right = bst(nums, mid + 1, high);
      return root;
    }
};