//C++ Code
//Title      Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
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
        
        if(levelIndex % 2 == 0)
            order[levelIndex].push_back(root->val);
        else
            order[levelIndex].insert(order[levelIndex].begin(), root->val);
        
        if(root->left != NULL || root->right != NULL)
        {
            traversal(order, root->left, levelIndex+1);
            traversal(order, root->right, levelIndex+1);
        }
    }
};
