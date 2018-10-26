//C++ Code
//Title      3Sum Closest
//Difficulty Medium

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0, dis = 99999;
        
        std::sort(nums.begin(), nums.end());
        for(int ii = 0; ii < nums.size(); ii++)
        {
            int jj = ii + 1, kk = nums.size() - 1;
            while(jj < kk)
            {
                int temp = abs(target - (nums[ii] + nums[jj] + nums[kk]));
                if(temp < dis)
                {
                    dis = temp;
                    ans = nums[ii] + nums[jj] + nums[kk];
                    while(nums[jj] == nums[jj+1] && nums[jj] == nums[jj+2]) jj++;
                    while(nums[kk] == nums[kk-1] && nums[kk] == nums[kk-2]) kk--;
                    
                    if(nums[ii] + nums[jj] + nums[kk] < target) jj++;
                    else
                    {
                        kk--;
                    }
                }
                else if(nums[ii] + nums[jj] + nums[kk] < target) jj++;
                else kk--;
            }
            while(ii < nums.size() && nums[ii] == nums[ii+1] && nums[ii] == nums[ii+2]) ii++;
        }
        cout << endl;
        return ans;
    }
};
