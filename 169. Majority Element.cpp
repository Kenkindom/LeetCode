//C++ Code
//Title      Majority Element
//Difficulty Easy

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> path(nums.size(), 0);
        int maxNum = nums[0], maxPath = 1;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(path[i] == 1)
                continue;
                
            path[i] = 1;
            int temp = 1;
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j] && path[j] == 0)
                {
                    path[j] = 1;
                    temp++;
                }
            }
            
            if(temp > maxPath)
            {
                maxPath = temp;
                maxNum = nums[i];
            }
        }
        
        return maxNum;
    }
};
