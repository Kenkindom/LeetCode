//C++ Code
//Title      Kth Smallest Element in a BST
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
    int kthSmallest(TreeNode* root, int k) {
        int kth = numberOfSubTree(root->left) + 1;
        if(kth == k)
            return root->val;
        else if(kth < k)
            return kthSmallest(root->right, k-kth);
        else
            return kthSmallest(root->left, k);
    }
    
    int numberOfSubTree(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        return numberOfSubTree(root->left) + numberOfSubTree(root->right) + 1;
    }
};
