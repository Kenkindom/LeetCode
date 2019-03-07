//C++ Code
//Title      Binary Tree Inorder Traversal
//Difficulty Medium

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        if(root == NULL)
            return inorder;
        
        InOrder(inorder, root);
        return inorder;
    }
    
    void InOrder(vector<int> &inorder,TreeNode *root)
    {
        if(root == NULL)
            return;
        
        InOrder(inorder, root->left);
        inorder.push_back(root->val);
        InOrder(inorder, root->right);
    }
};
