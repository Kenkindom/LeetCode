//C++ Code
//Title      Search Insert Position
//Difficulty Easy

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        for(; i < nums.size(); i++)
        {
            if(nums[i] > target)
                return i;
            else if(nums[i] < target && i+1 < nums.size() && nums[i+1] > target)
                return i+1;
            else if(nums[i] == target)
                return i;
        }
        
        return i;
    }
};
