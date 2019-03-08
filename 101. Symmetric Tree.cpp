//C++ Code
//Title      Symmetric Tree
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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        
        return isSymmetricTree(root->left, root->right);
    }
    
    bool isSymmetricTree(TreeNode *leftTree, TreeNode *rightTree)
    {
        if(leftTree == NULL && rightTree == NULL)
            return true;
        if(leftTree == NULL || rightTree == NULL)
            return false;
        
        if(leftTree->val == rightTree->val)
            return (isSymmetricTree(leftTree->left, rightTree->right) && isSymmetricTree(leftTree->right, rightTree->left));
        return false;
    }
};
