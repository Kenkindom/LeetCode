//C++ Code
//Title      Kth Largest Element in an Array
//Difficulty Medium

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};
