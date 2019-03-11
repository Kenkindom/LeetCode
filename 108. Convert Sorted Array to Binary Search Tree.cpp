//C++ Code
//Title      Convert Sorted Array to Binary Search Tree
//Difficulty Easy

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        
        return buildBalancaBST(nums, s, e);        
    }
    
    TreeNode* buildBalancaBST(vector<int> &nums, int s, int e)
    {
        if(s > e)
            return NULL;
        
        int m = (s + e) / 2;
        TreeNode *root = new TreeNode(nums[m]);
        TreeNode *leftSub = buildBalancaBST(nums, s, m-1);
        TreeNode *rightSub = buildBalancaBST(nums, m+1, e);
        
        root->left = leftSub;
        root->right = rightSub;
        
        return root;
    }
};
