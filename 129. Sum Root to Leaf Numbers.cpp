//C++ Code
//Title      Sum Root to Leaf Numbers
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
    int sumNumbers(TreeNode* root) {
        if(root == NULL)
            return 0;
        vector<int> nums(1, 0);
        traversal(root, nums);
        if(nums.size() == 1)
            return nums[0];
        return nums[0] + nums[1];
    }
    
    void traversal(TreeNode *root, vector<int> &nums)
    {
        if(root->left == NULL && root->right == NULL)
        {
            int temp = nums[nums.size()-1];
            temp = temp*10 + root->val;
            nums[nums.size()-1] = temp;
        }
        else if(root->right == NULL)
        {
            int temp = nums[nums.size()-1];
            temp = temp*10 + root->val;
            nums[nums.size()-1] = temp;
            traversal(root->left, nums);
        }
        else if(root->left == NULL)
        {
            int temp = nums[nums.size()-1];
            temp = temp*10 + root->val;
            nums[nums.size()-1] = temp;
            traversal(root->right, nums);
        }
        else
        {
            int temp = nums[nums.size()-1];
            temp = temp*10 + root->val;
            nums[nums.size()-1] = temp;
            
            traversal(root->left, nums);
            nums.push_back(temp);
            traversal(root->right, nums);
            
            int temp1 = nums[nums.size()-2], temp2 = nums[nums.size()-1];
            nums.erase(nums.end()-2, nums.end());
            nums.push_back(temp1+temp2);
        }
    }
};
