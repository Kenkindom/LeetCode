//C++ Code
//Title      Permutations
//Difficulty Mediun

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> allPer;
        if(nums.empty()) return allPer;
        allPer.push_back(vector<int>(1,nums[0]));
        
        for(int i=1; i<nums.size(); i++) {
            int n = allPer.size();
            for(int j=0; j<n; j++) {
                for(int k=0; k<allPer[j].size(); k++) {
                    vector<int> per = allPer[j];
                    per.insert(per.begin()+k, nums[i]);
                    allPer.push_back(per);
                }
                allPer[j].push_back(nums[i]);
            }
        }
        return allPer;
    }    
};
