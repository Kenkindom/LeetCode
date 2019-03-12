//C++ Code
//Title      Minimum Depth of Binary Tree
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
    int minDepth(TreeNode* root) {
        return getDepth(root);
    }
    
    int getDepth(TreeNode *root) 
    {
        if(root == NULL) 
            return 0;
        else if(root->left == NULL && root->right == NULL)
            return 1 + min(getDepth(root->left), getDepth(root->right));
        else if(root->left == NULL || root->right == NULL)
            return 1 + max(getDepth(root->left), getDepth(root->right));
        else
            return 1 + min(getDepth(root->left), getDepth(root->right));
    }
};
