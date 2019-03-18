//C++ Code
//Title      Surrounded Regions
//Difficulty Medium

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.size()<3 || board[0].size()<3) return;
        fillBorders(board, 'O', 'Y');
        replace(board, 'O', 'X');
        fillBorders(board, 'Y', 'O');
    }
    
    void fill(vector<vector<char>> &board, int i, int j, char target, char c) {
        int m = board.size(), n = board[0].size();
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]!=target) return;
        board[i][j] = c;
        fill(board, i-1, j, target, c);
        fill(board, i+1, j, target, c);
        fill(board, i, j-1, target, c);
        fill(board, i, j+1, target, c);
    }
    
    void fillBorders(vector<vector<char>> &board, char target, char c) {
        int m = board.size(), n = board[0].size();
        for(int i=0; i<m; i++) {
            if(board[i][0]==target) fill(board, i, 0, target, c);
            if(board[i][n-1]==target) fill(board, i, n-1, target, c);
        }
        
        for(int j=1; j<n-1; j++) {
            if(board[0][j]==target) fill(board, 0, j, target, c);
            if(board[m-1][j]==target) fill(board, m-1, j, target, c);
        }
    }
    
    
    void replace(vector<vector<char>> &board, char target, char c) {
        int m = board.size(), n = board[0].size();
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(board[i][j]==target)
                    board[i][j] = c;
            }
        }
    }
};
