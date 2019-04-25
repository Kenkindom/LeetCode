//C++ Code
//Title      Shuffle an Array
//Difficulty Medium

class Solution {
public:
    Solution(vector<int>& nums) {
        origin = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return origin;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> random = origin;
        for(int i = 0; i < random.size(); i++)
        {
            int index = i + rand() % (random.size()-i);
            swap(random[i], random[index]);
        }
        return random;
    }
private:
    vector<int> origin;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
