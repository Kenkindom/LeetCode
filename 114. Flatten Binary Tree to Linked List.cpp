//C++ Code
//Title      Flatten Binary Tree to Linked List
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
    void flatten(TreeNode *root) {
        if(root == NULL) 
            return;
        vector<TreeNode*> allNodes;
        preorder(root, allNodes);
        int n = allNodes.size();
        for(int i=0; i<n-1; i++)
        {
            allNodes[i]->left = NULL;
            allNodes[i]->right = allNodes[i+1];
        }
        allNodes[n-1]->left = allNodes[n-1]->right = NULL;
    }
    
    void preorder(TreeNode *root, vector<TreeNode*> &allNodes) 
    {
        if(root == NULL) 
            return;
        allNodes.push_back(root);
        preorder(root->left, allNodes);
        preorder(root->right, allNodes);
    }
};
