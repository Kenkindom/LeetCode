//C++ Code
//Title      Remove Duplicates from Sorted Array II
//Difficulty Medium
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = 1, size = nums.size();
        for(int i = 1; i < size; i++)
        {
            if(nums[i] == nums[i-1])
            {
                if(len == 2)
                {
                    nums.erase(nums.begin()+i, nums.begin()+i+1);
                    size--;
                    i--;
                }
                else
                    len++;
            }
            else
                len = 1;
        }
                
        return nums.size();
    }
};
