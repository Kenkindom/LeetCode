//C++ Code
//Title      Product of Array Except Self
//Difficulty Medium

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product(nums.size(), 1);
        vector<int> leftProduct(nums.size(), 1);
        vector<int> rightProduct(nums.size(), 1);
        
        for(int i = 0; i < nums.size()-1; i++)
            leftProduct[i+1] = leftProduct[i] * nums[i];
        for(int i = nums.size()-1; i > 0; i--)
            rightProduct[i-1] = rightProduct[i] * nums[i];
        for(int i = 0; i < nums.size(); i++)
            product[i] = leftProduct[i] * rightProduct[i];
        
        return product;
    }
};
