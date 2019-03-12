//C++ Code
//Title      Path Sum
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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL)
             return false;
        return pathSum(root, sum);
    }
    
    bool pathSum(TreeNode *root, int sum)
    {
        if(root == NULL)
            return (sum == 0);
        else if(root->left == NULL && root->right == NULL)
            return (sum-root->val == 0);
        else
        {
            if(hasPathSum(root->left, sum-root->val))
                return true;
            else
                return hasPathSum(root->right, sum-root->val);
        }
    }
};
