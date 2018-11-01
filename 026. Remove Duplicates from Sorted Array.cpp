//C++ Code
//Title      Remove Duplicates from Sorted Array
//Difficulty Easy

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ii = 0;
        
        while(ii < nums.size())
        {
            while(ii < nums.size()-1 && nums[ii] == nums[ii+1])
            {
                nums.erase(nums.begin()+ii+1);
            }
            ii++;
        }
        
        return nums.size();
    }
};
