//C++ Code
//Title      Next Permutation
//Difficulty Medium

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // reference from https://reurl.cc/91YKv
        bool last = true;
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] < nums[i+1])
            {
                last = false;
                break;
            }
        }
        
        if(last)
        {
            sort(nums.begin(), nums.end());
        }
        else
        {
            for(int i = nums.size()-1; i > 0; i--)
            {
                if(nums[i] > nums[i-1])
                {
                    sort(nums.begin()+i, nums.end());
                    for(int j = i; j < nums.size(); j++)
                    {
                        if(nums[i-1] < nums[j])
                        {
                            int temp = nums[i-1];
                            nums[i-1] = nums[j];
                            nums[j] = temp;
                            sort(nums.begin()+i, nums.end());
                            return;
                        }
                    }
                }
            }
        }
    }
};
