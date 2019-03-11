//C++ Code
//Title      Binary Tree Level Order Traversal II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> order;
        if(root == NULL)
            return order;
        
        vector<int> temp;
        temp.push_back(root->val);
        order.push_back(temp);
        if(root->left != NULL || root->right != NULL)
        {
            int treeDepth = 0;
            traversal(root->left, order, 1, treeDepth);
            traversal(root->right, order, 1, treeDepth);
        }
        
        return order;
    }
    
    void traversal(TreeNode *root, vector<vector<int>> &order, int levelIndex, int &treeDepth)
    {
        if(root == NULL)
            return;
        
        if(levelIndex >= order.size())
        {
            vector<int> temp;
            order.insert(order.begin(), temp);
            treeDepth++;
        }
        
        order[treeDepth - levelIndex].push_back(root->val);
        traversal(root->left, order, levelIndex+1, treeDepth);
        traversal(root->right, order, levelIndex+1, treeDepth);
    }
};
