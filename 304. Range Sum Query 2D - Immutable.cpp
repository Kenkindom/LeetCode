//C++ Code
//Title      Range Sum Query 2D - Immutable
//Difficulty Medium

class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return;
        arr.resize(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));
        for(int i = 1; i <= matrix.size(); i++)
        {
            for(int j = 1; j <= matrix[0].size(); j++)
                arr[i][j] = arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1] + matrix[i-1][j-1];
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return arr[row2 + 1][col2 + 1] - arr[row1][col2 + 1] - arr[row2 + 1][col1] + arr[row1][col1];
    }
private:
    vector<vector<int>> arr;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
