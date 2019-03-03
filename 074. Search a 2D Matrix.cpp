//C++ Code
//Title      Search a 2D Matrix
//Difficulty Medium

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        
        int searchRow = 0;
        for(int i = 1; i < matrix.size(); i++)
        {
            if(target < matrix[i][0])
                break;
            searchRow = i;
        }
        
        for(int j = 0; j < matrix[0].size(); j++)
        {
            if(matrix[searchRow][j] == target)
                return true;
            else if(matrix[searchRow][j] > target)
                return false;
        }
        
        return false;
    }
};
