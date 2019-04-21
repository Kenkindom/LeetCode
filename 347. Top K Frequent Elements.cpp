//C++ Code
//Title      Top K Frequent Elements
//Difficulty Medium

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator iter;
        for(int i = 0; i < nums.size(); i++)
        {
            if(m[nums[i]] == 0)
                m[nums[i]] = 1;
            else
                m[nums[i]]++;
        }
        
        priority_queue<pair<int, int>> q;
        for (iter = m.begin(); iter != m.end(); iter++) 
            q.push({iter->second, iter->first});
        
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(q.top().second); 
            q.pop();
        }
        return res;
    }
};
