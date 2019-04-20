//C++ Code
//Title      Wiggle Sort II
//Difficulty Medium

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> tmp = nums;
        int n = nums.size(), k = (n + 1) / 2, j = n; 
        for (int i = 0; i < n; ++i)
            nums[i] = i & 1 ? tmp[--j] : tmp[--k];
    }
};
