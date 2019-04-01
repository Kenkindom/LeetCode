//C++ Code
//Title      Binary Tree Right Side View
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightNode;
        if(root == NULL)
            return rightNode;
        
        vector<TreeNode*> node;
        node.push_back(root);
        int preLevelNum = 1, nowLevelNum = 0;
        
        while(node.size() != 0)
        {
            for(int i = 0; i < preLevelNum; i++)
            {
                TreeNode *temp = node[0];
                if(i == preLevelNum-1)
                    rightNode.push_back(temp->val);
                node.erase(node.begin(), node.begin()+1);
                if(temp->left != NULL)
                {
                    node.push_back(temp->left);
                    nowLevelNum++;
                }
                if(temp->right != NULL)
                {
                    node.push_back(temp->right);
                    nowLevelNum++;
                }
            }
            preLevelNum = nowLevelNum;
            nowLevelNum = 0;
        }
        return rightNode;
    }
};
