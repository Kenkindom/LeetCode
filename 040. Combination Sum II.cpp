//C++ Code
//Title      Combination Sum II
//Difficulty Mediun

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        
        sort(candidates.begin(), candidates.end());
                
        for(int i = 0; i < candidates.size(); i++)
        {
            if(i > 0 && candidates[i] == candidates[i-1])
                continue;
            
            if(candidates[i] == target)
            {
                ans.push_back({target});
                return ans;
            }
            else if(candidates[i] > target)
                return ans;
            
            vector<int> tempCandidates(candidates.begin()+i+1, candidates.end());
            vector<vector<int>> subAns = combinationSum2(tempCandidates, target-candidates[i]);
            for(int j = 0; j < subAns.size(); j++)
            {
                vector<int> temp;
                temp.push_back(candidates[i]);
                temp.insert(temp.end(), subAns[j].begin(), subAns[j].end());
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};
