//C++ Code
//Title      Remove Element
//Difficulty Easy

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ii = 0;
        while(ii < nums.size())
        {
            if(nums[ii] == val)
            {
                nums.erase(nums.begin()+ii);
                continue;
            }
            ii++;
        }
        
        return nums.size();
    }
};
