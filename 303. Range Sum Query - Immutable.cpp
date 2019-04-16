//C++ Code
//Title      Range Sum Query - Immutable
//Difficulty Easy

class NumArray {
public:
    NumArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            arr.push_back(nums[i]);
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
        while(i <= j)
        {
            sum += arr[i];
            i++;
        }
        return sum;
    }
private:
    vector<int> arr;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
