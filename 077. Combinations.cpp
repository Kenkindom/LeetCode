//C++ Code
//Title      Combinations
//Difficulty Medium

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        if(k > n)
            return ans;
        
        vector<int> current;
        backtracking(ans, current, k, n, -1);
        
        return ans;
    }
    void backtracking(vector<vector<int>> &ans, vector<int> &current, int k, int n, int last) {
        if (k == 0)
        {
            ans.push_back(current);
        }
        else
        {
            for (int i = last + 1; i <= n - k; i++)
            {
                current.push_back(i + 1);
                backtracking(ans, current, k - 1, n, i);
                current.pop_back();
            }
        }
    }
};
