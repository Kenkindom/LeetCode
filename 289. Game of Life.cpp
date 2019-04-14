//C++ Code
//Title      Game of Life
//Difficulty Medium

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        if(board.size() == 0 || board[0].size() == 0)
            return;
        vector<int> cellRow;
        cellRow.assign(board[0].size(), 0);
        vector<vector<int>> liveCell;
        liveCell.assign(board.size(), cellRow);
        
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(i-1 >= 0)
                {
                    if(j-1 >= 0 && board[i-1][j-1] == 1)
                        liveCell[i][j]++;
                    if(board[i-1][j] == 1)
                        liveCell[i][j]++;
                    if(j+1 < board[0].size() && board[i-1][j+1] == 1)
                        liveCell[i][j]++;
                }
                
                if(j-1 >= 0 && board[i][j-1] == 1)
                    liveCell[i][j]++;
                if(j+1 < board[0].size() && board[i][j+1] == 1)
                    liveCell[i][j]++;
                if(i+1 < board.size())
                {
                    if(j-1 >= 0 && board[i+1][j-1] == 1)
                        liveCell[i][j]++;
                    if(board[i+1][j] == 1)
                        liveCell[i][j]++;
                    if(j+1 < board[0].size() && board[i+1][j+1] == 1)
                        liveCell[i][j]++;
                }
            }
        }
        
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == 0 && liveCell[i][j] == 3)
                    board[i][j] = 1;
                else if(board[i][j] == 1 && (liveCell[i][j] < 2 || liveCell[i][j] > 3))
                    board[i][j] = 0;
            }
        }
    }
};
