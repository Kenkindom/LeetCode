//C++ Code
//Title      Two Sum
//Difficulty Easy

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2,0);
        int temp = 0;
        int isFind = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            temp = target - nums[i];
            ans[0] = i;
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(temp - nums[j] == 0)
                {
                    ans[1] = j;
                    isFind = 1;
                    break;
                }    
            }
            if(isFind == 1) break;
        }
        return ans;
    }
};
