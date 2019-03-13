//C++ Code
//Title      Path Sum II
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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> pathAll;
        vector<int> pathOne;
        if(root == NULL)
            return pathAll;
        
        findPath(root, pathAll, pathOne, sum);
        return pathAll;
    }
    
    void findPath(TreeNode *root, vector<vector<int>> &pathAll, vector<int> &pathOne, int sum)
    {
        if(root == NULL)
        {
            return;
        }
        else if(root->left == NULL && root->right == NULL)
        {
            if(root->val == sum)
            {
                pathOne.push_back(root->val);
                pathAll.push_back(pathOne);
                pathOne.erase(pathOne.end()-1);
                return;
            }
        }
        else
        {
            pathOne.push_back(root->val);
            findPath(root->left, pathAll, pathOne, sum-root->val);
            findPath(root->right, pathAll, pathOne, sum-root->val);
            pathOne.erase(pathOne.end()-1);
        }
    }
};
