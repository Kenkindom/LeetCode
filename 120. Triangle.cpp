//C++ Code
//Title      Triangle
//Difficulty Medium

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> path;
        if(triangle.size() == 0 || triangle[0].size() == 0)
            return 0;
        
        for(int i = 0; i < triangle.size(); i++)
        {
            vector<int> pathRow;
            for(int j = 0; j < triangle[i].size(); j++)
            {
                if(i == 0)
                    pathRow.push_back(triangle[i][j]);
                else if(j == 0)
                    pathRow.push_back(path[i-1][j]+triangle[i][j]);
                else if(j == triangle[i].size()-1)
                    pathRow.push_back(path[i-1][j-1]+triangle[i][j]);
                else
                    pathRow.push_back(min(path[i-1][j-1], path[i-1][j])+triangle[i][j]);
            }
            path.push_back(pathRow);
        }
        
        int minPath = path[path.size()-1][0];
        for(int i = 1; i < path[path.size()-1].size(); i++)
            minPath = minPath < path[path.size()-1][i] ? minPath : path[path.size()-1][i];
        
        return minPath;
    }
};
