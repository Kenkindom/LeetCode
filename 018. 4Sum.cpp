//C++ Code
//Title      4Sum
//Difficulty Medium

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums, int target){
        vector<vector<int>> ans;
        for(int ii = 0; ii < nums.size(); ii++)
        {
            int jj = ii + 1, kk = nums.size()-1;
            while(jj < kk)
            {
                if(nums[ii] + nums[jj] + nums[kk] == target)
                {
                    vector<int> temp;
                    temp.push_back(nums[ii]);
                    temp.push_back(nums[jj]);
                    temp.push_back(nums[kk]);
                    ans.push_back(temp);
                    while(nums[jj] == nums[jj+1]) jj++;
                    while(nums[kk] == nums[kk-1]) kk--;
                    jj++;
                    kk--;
                } 
                else if(nums[ii] + nums[jj] + nums[kk] < target) jj++;
                else kk--;
            }
            while(nums[ii] == nums[ii+1]) ii++;
        }
        
        return ans;
    }
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans, threeAns;
        vector<int> sub;
        for(int ii = 0; ii < nums.size(); ii++)
        {
            sub.assign(nums.begin()+ii+1, nums.end());
            threeAns = threeSum(sub, target-nums[ii]);
            
            for(int jj = 0; jj < threeAns.size(); jj++)
            {
                vector<int> temp;
                temp.push_back(nums[ii]);
                temp.push_back(threeAns[jj][0]);
                temp.push_back(threeAns[jj][1]);
                temp.push_back(threeAns[jj][2]);
                ans.push_back(temp);
            }
            while(nums[ii] == nums[ii+1]) ii++;
        }
        
        return ans;
    }
};
