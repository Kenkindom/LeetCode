//C++ Code
//Title      Maximum Depth of Binary Tree
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
    int maxDepth(TreeNode* root) {
        int depth = 0, maxDepth;
        
        maxDepth = depthTree(root, depth);
        return maxDepth;
    }
    
    int depthTree(TreeNode *root, int depth)
    {
        if(root == NULL)
            return depth;
        
        int leftDepth = depthTree(root->left, depth+1);
        int rightDepth = depthTree(root->right, depth+1);
        
        return (leftDepth > rightDepth) ? leftDepth : rightDepth;
    }
};
