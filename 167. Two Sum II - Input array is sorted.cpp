//C++ Code
//Title      Two Sum II - Input array is sorted
//Difficulty Easy

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> twoIndex;
        for(int i = 0; i < numbers.size(); i++)
        {
            int index = binarySearch(numbers, target-numbers[i], i+1, numbers.size()-1);
            if(index != -1)
            {
                twoIndex.push_back(i+1);
                twoIndex.push_back(index+1);
                break;
            }
        }
        
        return twoIndex;
    }
    
    int binarySearch(vector<int> &numbers, int target, int left, int right)
    {
        if(left > right)
            return -1;
        
        int mid = (left + right) / 2;
        if(numbers[mid] == target)
            return mid;
        else if(numbers[mid] > target)
            return binarySearch(numbers, target, left, mid-1);
        else if(numbers[mid] < target)
            return binarySearch(numbers, target, mid+1, right);
        
        return -1;
    }
};
