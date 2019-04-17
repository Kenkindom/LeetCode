//C++ Code
//Title      Range Sum Query - Mutable
//Difficulty Medium

class NumArray {
public:
    NumArray(vector<int>& nums) {
        arr.push_back(0);
        for(int i = 0; i < nums.size(); i++)
        {
            arr.push_back(arr[i] + nums[i]); 
            cout << arr[arr.size()-1];
        }
    }
    
    void update(int i, int val) {
        int diff = arr[i+1] - arr[i] - val;
        for(int index = i+1; index < arr.size(); index++)
            arr[index] = arr[index] - diff;
    }
    
    int sumRange(int i, int j) {
        return arr[j+1] - arr[i];
    }
private:
    vector<int> arr;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
