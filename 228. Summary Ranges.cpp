//C++ Code
//Title      Summary Ranges
//Difficulty Medium

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> range;
        int first = 0, index = 0;
        while(index < nums.size())
        {
            if(index == nums.size()-1 || nums[index]+1 != nums[index+1])
            {
                range.push_back(index - first == 0 ? to_string(nums[first]) : to_string(nums[first]) + "->" + to_string(nums[index]));
                first = index+1;
            }
            index++;
        }
        return range;
    }
};
