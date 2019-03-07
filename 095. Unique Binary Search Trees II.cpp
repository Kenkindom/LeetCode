//C++ Code
//Title      Unique Binary Search Trees II
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
    vector<TreeNode*> generateTrees(int n) {
        // Reference From https://reurl.cc/Y05gn
        if(n == 0)
        {
            vector<TreeNode*> temp;
            return temp;
        }
        return genBST(1, n);
    }
    
    vector<TreeNode *> genBST(int min, int max)
    {
        vector<TreeNode *> ret;
        if(min>max) 
        {
            ret.push_back(NULL);
            return ret;
        }
        
        for(int i=min; i<=max; i++) 
        {
            vector<TreeNode*> leftSubTree = genBST(min,i-1);
            vector<TreeNode*> rightSubTree = genBST(i+1,max);
            for(int j=0; j<leftSubTree.size(); j++) 
            {
                for(int k=0; k<rightSubTree.size(); k++) 
                {
                    TreeNode *root = new TreeNode(i);
                    root->left = leftSubTree[j];
                    root->right = rightSubTree[k];
                    ret.push_back(root);
                }
            }
        }
        
        return ret;
    }
};
