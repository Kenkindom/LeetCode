//C++ Code
//Title      Median of Two Sorted Arrays
//Difficulty Hard

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double mid = 0;
        int totalSize = nums1.size() + nums2.size();
        int nums1Flag = 0, nums2Flag = 0;
        vector<int> sortedArray(totalSize, 0);
                
        for(int i = 0; i < totalSize; i++)
        {
            if(nums2Flag == nums2.size() || (nums1Flag < nums1.size() && nums1[nums1Flag] <= nums2[nums2Flag]))
            {
                sortedArray[i] = nums1[nums1Flag];
                nums1Flag++;
            }
            else
            {
                sortedArray[i] = nums2[nums2Flag];
                nums2Flag++;
            }
        }
        
        int index = totalSize / 2 - 1;
        if(totalSize % 2 == 0)
        {
            mid = (sortedArray[index] + sortedArray[index+1]) / 2.0;
        }
        else
        {
            mid = sortedArray[index+1];
        }
        
        return mid;
    }
};
