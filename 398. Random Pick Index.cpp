//C++ Code
//Title      Random Pick Index
//Difficulty Medium

class Solution {
public:
    Solution(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            m[nums[i]].push_back(i);
    }
    
    int pick(int target) {
        return m[target][rand() % m[target].size()];
    }
private:
    unordered_map<int, vector<int>> m;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
