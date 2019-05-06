//C++ Code
//Title      Wiggle Subsequence
//Difficulty Medium

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums.size();
        int negOrPos = 0, preIndex = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[0] != nums[i])
            {
                negOrPos = nums[i] > nums[0] ? 1 : -1;
                preIndex = i;
                break;
            }
        }
        if(negOrPos == 0)
            return 1;
        
        int len = 2;
        for(int i = preIndex+1; i < nums.size(); i++)
        {
            if((negOrPos == 1 && nums[i] < nums[preIndex]) || (negOrPos == -1 && nums[i] > nums[preIndex]))
            {
                len++;
                negOrPos *= -1;
            }
            preIndex = i;
        }
        return len;
    }
};
