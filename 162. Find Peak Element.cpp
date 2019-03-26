//C++ Code
//Title      Find Peak Element
//Difficulty Medium

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(i == 0 && i+1 < nums.size() && nums[i] > nums[i+1])
                return i;
            else if(i == nums.size()-1 && i-1 >= 0 && nums[i] > nums[i-1])
                return i;
            else if(i-1 >= 0 && nums[i] > nums[i-1] && i+1 < nums.size() && nums[i] > nums[i+1])
                return i;
        }
        return 0;
    }
};
