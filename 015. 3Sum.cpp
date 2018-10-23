//C++ Code
//Title      3Sum
//Difficulty Medium

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // reference from https://ppt.cc/fp65Vx
        vector<vector<int>> ansVec;
        std::sort(nums.begin(), nums.end());
        
        if(!nums.empty() && nums.back() < 0) return ansVec;
        for(int ii = 0; ii < nums.size(); ii++)
        {
            if(nums[ii] > 0) return ansVec;
            
            int target = 0 - nums[ii];
            int jj = ii + 1, kk = nums.size() - 1;
            while(jj < kk)
            {
                if(nums[jj] + nums[kk] == target)
                {
                    vector<int> temp;
                    temp.push_back(nums[ii]);
                    temp.push_back(nums[jj]);
                    temp.push_back(nums[kk]);
                    ansVec.push_back(temp);
                    while(jj < kk && nums[jj] == nums[jj+1]) jj++;
                    while(jj < kk && nums[kk] == nums[kk-1]) kk--;
                    jj++;
                    kk--;
                }
                else if(nums[jj] + nums[kk] < target) jj++;
                else kk--;
            }
            while(ii < nums.size() && nums[ii] == nums[ii+1]) ii++;
        }
        
        return ansVec;
    }
};
