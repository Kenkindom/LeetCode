//C++ Code
//Title      Binary Tree Paths
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        findAllLeaf(root, paths, "");
        return paths;
    }
    
    void findAllLeaf(TreeNode *root, vector<string> &paths, string path)
    {
        if(root == NULL)
        {
            return;
        }
        
        path = path + std::to_string(root->val) + "->";
        
        if(root->left == NULL && root->right == NULL)
        {
            path = path.assign(path.begin(), path.end()-2);
            paths.push_back(path);
        }
        else
        {
            findAllLeaf(root->left, paths, path);
            findAllLeaf(root->right, paths, path);
        }
    }
};
