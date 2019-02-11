//C++ Code
//Title      Find First and Last Position of Element in Sorted Array
//Difficulty Mediun

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> index(2);
        if(nums.size() == 0)
        {
            // Input []
            index[0] = -1;
            index[1] = -1;
        }
        else if(nums[0] == nums[nums.size()-1])
        {
            // Input Vector Have All Same Number
            if(nums[0] == target)
            {
                index[0] = 0;
                index[1] = nums.size()-1;
            }
            else
            {
                index[0] = -1;
                index[1] = -1;
            }
        }
        else
        {
            index[0] = binSearchFirst(nums, 0, nums.size()-1, target);
            index[1] = binSearchEnd(nums, index[0] ,nums.size()-1, target);
        }
        return index;
    }
    
    int binSearchFirst(vector<int> &nums, int start, int end, int tar)
    {
        // Find First Target Number In Array
        if(start > end)
            return -1;
        
        int mid = start + (end - start) / 2;
        if(nums[mid] == tar)
        {
            if(mid != 0 && nums[mid-1] == tar)
            {
                return binSearchFirst(nums, start, mid-1, tar);
            }
            else
                return mid;
        }
        else
        {
            if(nums[mid] < tar)
                return binSearchFirst(nums, mid+1, end, tar);
            else
                return binSearchFirst(nums, start, mid-1, tar);
        }
    }
    
    int binSearchEnd(vector<int> &nums, int start, int end, int tar)
    {
        // Find End Target Number In Array
        if(start > end)
            return -1;
        
        int mid = start + (end - start) / 2;
        if(nums[mid] == tar)
        {
            if(mid != nums.size()-1 && nums[mid+1] == tar)
            {
                return binSearchEnd(nums, mid+1, end, tar);
            }
            else
                return mid;
        }
        else
        {
            if(nums[mid] < tar)
                return binSearchEnd(nums, mid+1, end, tar);
            else
                return binSearchEnd(nums, start, mid-1, tar);
        }
    }
};
