//C++ Code
//Title      Maximal Square
//Difficulty Medium

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        // Reference From https://reurl.cc/1XneX
        int rows = matrix.size(), cols = rows > 0 ? matrix[0].size() : 0;
        vector<int> dpRow;
        dpRow.assign(cols+1, 0);
        vector<vector<int>> dp;
        dp.assign(rows+1, dpRow);
        int maxsqlen = 0;
        
        for (int i = 1; i <= rows; i++) 
        {
            for (int j = 1; j <= cols; j++) 
            {
                if (matrix[i-1][j-1] == '1')
                {
                    dp[i][j] = min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1;
                    maxsqlen = max(maxsqlen, dp[i][j]);
                }
            }
        }
        return maxsqlen * maxsqlen;
    }
};
