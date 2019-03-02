//C++ Code
//Title      Unique Paths II
//Difficulty Mediun

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.size() == 0 || obstacleGrid[0].size() == 0)
            return 0;
        
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        
        vector<long> pathRow;
        pathRow.assign(n, 0);
        vector<vector<long>> pathArray;
        pathArray.assign(m, pathRow);
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(obstacleGrid[i][j] == 1)
                    pathArray[i][j] = 0;
                else if(i == 0 && j == 0)
                    pathArray[i][j] = 1;
                else if(i == 0 && j != 0)
                    pathArray[i][j] = pathArray[i][j-1];
                else if(j == 0 && i != 0)
                    pathArray[i][j] = pathArray[i-1][j];
                else
                    pathArray[i][j] = pathArray[i-1][j] + pathArray[i][j-1];
            }
        }
        
        return pathArray[m-1][n-1];
    }
};
