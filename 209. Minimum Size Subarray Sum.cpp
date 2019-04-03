//C++ Code
//Title      Minimum Size Subarray Sum
//Difficulty Medium

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int minLength = nums.size()+1;
        int left = 0, sum = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            while(left <= i && sum >= s)
            {
                minLength = (minLength < (i-left+1)) ? minLength : (i-left+1);
                sum -= nums[left];
                left++;
            }
        }
        
        return (minLength == nums.size()+1 ? 0 : minLength);
    }
};
