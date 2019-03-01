//C++ Code
//Title      Jump Game
//Difficulty Mediun

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i > reach || reach >= nums.size()-1)
                break;
            reach = (reach > i+nums[i]) ? reach : i+nums[i];
        }
        
        return reach >= nums.size()-1;
    }
};
