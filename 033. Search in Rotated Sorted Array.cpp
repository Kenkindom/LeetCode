//C++ Code
//Title      Search in Rotated Sorted Array
//Difficulty Mediun

/*
  0124567
  
  s  m  e
  6701245
  Case 1: [m] < [e] < [s] => Rright Half Is Sorted
          if [m] < target <= [e], Search Right Half
          else Search Left Half
  s  m  e
  2456701
  Case 2: [e] < [s] < [m] => Left Half is Sorted
          if [e] <= target < [m], Search Left Half
          else Search Right Half
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Use Binary Search
        return binSearch(nums, 0, nums.size()-1, target);
    }
    
    int binSearch(vector<int> &nums,int start,int end,int tar)
    {
        // Search All Array
        if(start > end) 
            return -1;
        
        int midIndex = start + (end - start) / 2;
        // Find Target
        if(nums[midIndex] == tar)
            return midIndex;
        
        if(nums[midIndex] < nums[end] && nums[end] < nums[start])
        {
            // Right Half Is Sorted
            if(nums[midIndex] < tar && tar <= nums[end])
                return binSearch(nums, midIndex+1, end, tar);
            else
                return binSearch(nums, 0, midIndex-1, tar);
        }
        else
        {
            // Left Half Is Sorted
            if(nums[start] <= tar && tar < nums[midIndex])
                return binSearch(nums, 0, midIndex-1, tar);
            else
                return binSearch(nums, midIndex+1, end, tar);
        }
    }
};
