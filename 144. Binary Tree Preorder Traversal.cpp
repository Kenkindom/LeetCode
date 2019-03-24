//C++ Code
//Title      Binary Tree Preorder Traversal
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;        
        traversal(root, preorder);
        return preorder;
    }
    
    void traversal(TreeNode *root, vector<int> &preorder)
    {
        if(root == NULL)
            return;
        
        preorder.push_back(root->val);
        traversal(root->left, preorder);
        traversal(root->right, preorder);
    }
};
