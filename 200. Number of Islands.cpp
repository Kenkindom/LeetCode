//C++ Code
//Title      Number of Islands
//Difficulty Medium

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0 || grid[0].size() == 0)
            return 0;
        
        int number = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] == '1')
                {
                    //DFS
                    cout << "DFS";
                    DFS(grid, i, j);
                    number++;
                }
            }
        }
        
        return number;
    }
    
    void DFS(vector<vector<char>>& grid, int i, int j)
    {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;
        
        grid[i][j] = '2';
        if(i+1 < grid.size() && grid[i+1][j] == '1')
            DFS(grid, i+1, j);
        if(i-1 >=0 && grid[i-1][j] == '1')
            DFS(grid, i-1, j);
        if(j+1 < grid[0].size() && grid[i][j+1] == '1')
            DFS(grid, i, j+1);
        if(j-1 >= 0 && grid[i][j-1] == '1')
            DFS(grid, i, j-1);
    }
};
