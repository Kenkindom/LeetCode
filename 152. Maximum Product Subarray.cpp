//C++ Code
//Title      Maximum Product Subarray
//Difficulty Medium

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Reference From https://reurl.cc/6dNOM
        int ret, curMax, curMin;
        ret = curMax = curMin = nums[0];
        
        for(int i = 1; i < nums.size(); i++) 
        {
            int temp = curMax;
            curMax = max(max(curMax*nums[i], curMin*nums[i]),nums[i]);
            curMin = min(min(temp*nums[i], curMin*nums[i]),nums[i]);
            ret = max(ret, curMax);
        }
        return ret;
    }
};
