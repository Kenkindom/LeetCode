//C++ Code
//Title      House Robber
//Difficulty Easy

class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0, notRob = 0, n = nums.size();
        for (int i = 0; i < n; ++i) 
        {
            int preRob = rob, preNotRob = notRob;
            rob = preNotRob + nums[i];
            notRob = max(preRob, preNotRob);
        }
        return max(rob, notRob);
    }
};
