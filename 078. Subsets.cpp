//C++ Code
//Title      Subsets
//Difficulty Medium

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        ans.push_back(current);
        for(int i = 1; i <= nums.size(); i++)
        {
            combine(ans, current, nums, i, nums.size(), -1);
        }
        return ans;
    }
    
    void combine(vector<vector<int>> &ans, vector<int> &current, vector<int> &nums, int k, int n, int last) {
        if (k == 0)
        {
            ans.push_back(current);
        }
        else
        {
            for (int i = last + 1; i <= n - k; i++)
            {
                current.push_back(nums[i]);
                combine(ans, current, nums, k - 1, n, i);
                current.pop_back();
            }
        }
    }
};
