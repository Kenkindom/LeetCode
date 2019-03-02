//C++ Code
//Title      Unique Paths
//Difficulty Mediun

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> pathRow;
        pathRow.assign(n, 0);
        vector<vector<int>> pathArray;
        pathArray.assign(m, pathRow);
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == 0 || j == 0)
                    pathArray[i][j] = 1;
                else
                    pathArray[i][j] = pathArray[i-1][j] + pathArray[i][j-1];
            }
        }
        
        return pathArray[m-1][n-1];
    }
};
