//C++ Code
//Title      Search a 2D Matrix II
//Difficulty Medium

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        if (target < matrix[0][0] || target > matrix.back().back()) 
            return false;
        int x = matrix.size() - 1, y = 0;
        
        while (1) {
            if (matrix[x][y] > target) 
                --x;
            else if (matrix[x][y] < target) 
                ++y;
            else 
                return true;
            if (x < 0 || y >= matrix[0].size()) 
                break;
        }
        return false;
    }
};
