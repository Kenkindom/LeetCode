//C++ Code
//Title      Count Complete Tree Nodes
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
    int countNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        vector<TreeNode*> s;
        s.push_back(root);
        int count = 0;
        
        while(s.size() != 0)
        {
            TreeNode* current = s[0];
            if(current->left != NULL)
                s.push_back(current->left);
            if(current->right != NULL)
                s.push_back(current->right);
            
            count++;
            s.erase(s.begin(), s.begin()+1);
        }
        
        return count;
    }
};
