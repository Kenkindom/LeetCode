//C++ Code
//Title      Binary Tree Level Order Traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> order;
        if(root == NULL)
            return order;
        vector<int> level;
        level.push_back(root->val);
        order.push_back(level);
        
        if(root->left != NULL || root->right != NULL)
        {
            traversal(order, root->left, 1);
            traversal(order, root->right, 1);
        }
        
        return order;
    }
    
    void traversal(vector<vector<int>> &order, TreeNode *root, int levelIndex)
    {
        if(levelIndex >= order.size())
        {
            vector<int> level;
            order.push_back(level);
        }
        
        if(root == NULL)
            return;
        
        order[levelIndex].push_back(root->val);
        if(root->left != NULL || root->right != NULL)
        {
            traversal(order, root->left, levelIndex+1);
            traversal(order, root->right, levelIndex+1);
        }
    }
};
