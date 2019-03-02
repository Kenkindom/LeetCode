//C++ Code
//Title      Minimum Path Sum
//Difficulty Mediun

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0 || grid[0].size() == 0)
            return 0;
        
        int m = grid.size(), n = grid[0].size();
        vector<int> minPathRow;
        minPathRow.assign(n, 0);
        vector<vector<int>> minPathArray;
        minPathArray.assign(m, minPathRow);
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == 0 && j == 0)
                    minPathArray[i][j] = grid[i][j];
                else if(i == 0 && j != 0)
                    minPathArray[i][j] = grid[i][j] + minPathArray[i][j-1];
                else if(j == 0 && i != 0)
                    minPathArray[i][j] = grid[i][j] + minPathArray[i-1][j];
                else
                    minPathArray[i][j] = grid[i][j] + min(minPathArray[i-1][j], minPathArray[i][j-1]);
            }
        }
        
        return minPathArray[m-1][n-1];
    }
};
