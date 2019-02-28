//C++ Code
//Title      Maximum Subarray
//Difficulty Easy

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int temp = nums[0], end = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            temp = (temp+nums[i] > nums[i]) ? temp+nums[i] : nums[i];
            end = temp > end ? temp : end;
        }
        
        return end;
    }
};
