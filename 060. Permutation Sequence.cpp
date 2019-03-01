//C++ Code
//Title      Permutation Sequence
//Difficulty Mediun

class Solution {
public:
    string getPermutation(int n, int k) {
        string str;
        for(int i = 1; i <= n; i++)
            str += (i+'0');
        
        for(int i = 2; i <= k; i++)
            nextPermutation(str);
        
        
        return str;
    }
    
    void nextPermutation(string& nums) {
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
};
