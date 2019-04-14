//C++ Code
//Title      Move Zeroes
//Difficulty Easy

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0)
            return;
        
        int end = nums.size();
        for(int i = nums.size()-1; i >= 0; i--)
        {
            if(nums[i] == 0)
            {
                for(int j = i+1; j < end; j++)
                {
                    nums[j-1] = nums[j];
                }
                nums[end-1] = 0;
                end--;
            }
        }
    }
};
