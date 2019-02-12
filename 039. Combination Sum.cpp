//C++ Code
//Title      Combination Sum
//Difficulty Medium

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        
        sort(candidates.begin(), candidates.end());
        
        for(int i = 0; i < candidates.size(); i++)
        {
            if(candidates[i] == target)
            {
                ans.push_back({target});
                return ans;
            }
            else if(candidates[i] > target)
                return ans;
            
            vector<int> tempCandidates(candidates.begin()+i, candidates.end());
            vector<vector<int>> subans = combinationSum(tempCandidates, target-candidates[i]);
            for(int j = 0; j < subans.size(); j++)
            {
                vector<int> temp;
                temp.push_back(candidates[i]);
                temp.insert(temp.end(), subans[j].begin(), subans[j].end());
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};
