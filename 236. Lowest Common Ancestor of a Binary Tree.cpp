//C++ Code
//Title      Lowest Common Ancestor of a Binary Tree
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val == p->val || root->val == q->val)
            return root;
        
        int searchp = searchNode(root->left, p) ? -1 : 1;
        int searchq = searchNode(root->left, q) ? -1 : 1;
        if(searchp != searchq)
            return root;
        else
        {
            if(searchp < 0)
                return lowestCommonAncestor(root->left, p, q);
            else
                return lowestCommonAncestor(root->right, p ,q);
        }
    }
    
    bool searchNode(TreeNode *root, TreeNode *target)
    {
        if(root == NULL)
            return false;
        else if(root->val == target->val)
            return true;
        else if(searchNode(root->left, target) || searchNode(root->right, target))
            return true;
        else
            return false;
    }
};
