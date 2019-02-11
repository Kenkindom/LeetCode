//C++ Code
//Title      Valid Sudoku
//Difficulty Mediun

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty())
            return false;
        
        int h = board.size(), w = board[0].size();
        vector<vector<bool>> rowFlag(h, vector<bool>(w, false));
        vector<vector<bool>> colFlag(h, vector<bool>(w, false));
        vector<vector<bool>> gridFlag(h, vector<bool>(w, false));
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(board[i][j] >= '1' && board[i][j] <= '9')
                {
                    int k = board[i][j] - '1';
                    if(rowFlag[i][k] || colFlag[k][j] || gridFlag[3*(i/3)+j/3][k])
                        return false;
                    rowFlag[i][k] = true;
                    colFlag[k][j] = true;
                    gridFlag[3*(i/3)+j/3][k] = true;
                }
            }
        }
        return true;
    }
};
