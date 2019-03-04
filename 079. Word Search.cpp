//C++ Code
//Title      Word Search
//Difficulty Medium

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size() == 0 || board[0].size() == 0)
            return false;
        vector<int> row;
        row.assign(board[0].size(), 0);
        vector<vector<int>> path;
        path.assign(board.size(), row);
        
        bool find;
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(word[0] == board[i][j])
                {
                    path[i][j] = 1;
                    find = findWord(board, word, path, i, j, 1);
                    path[i][j] = 0;
                }
                if(find)
                    return find;
            }
        }
        return false;
    }
    
    bool findWord(vector<vector<char>> &board, string word, vector<vector<int>> &path, int indexI, int indexJ, int strIndex)
    {
        cout << indexI << indexJ << endl;
        if(strIndex == word.size())
            return true;
        
        bool find = false;
        if(!find && indexJ+1 < board[0].size() && path[indexI][indexJ+1] != 1 && word[strIndex] == board[indexI][indexJ+1])
        {
            path[indexI][indexJ+1] = 1;
            find = findWord(board, word, path, indexI, indexJ+1, strIndex+1);
            path[indexI][indexJ+1] = 0;
        }
        if(!find && indexI+1 < board.size() && path[indexI+1][indexJ] != 1 && word[strIndex] == board[indexI+1][indexJ])
        {
            path[indexI+1][indexJ] = 1;
            find = findWord(board, word, path, indexI+1, indexJ, strIndex+1);
            path[indexI+1][indexJ] = 0;
        }
        if(!find && indexJ-1 >= 0 && path[indexI][indexJ-1] != 1 && word[strIndex] == board[indexI][indexJ-1])
        {
            path[indexI][indexJ-1] = 1;
            find = findWord(board, word, path, indexI, indexJ-1, strIndex+1);
            path[indexI][indexJ-1] = 0;
        }
        if(!find && indexI-1 >= 0 && path[indexI-1][indexJ] != 1 && word[strIndex] == board[indexI-1][indexJ])
        {
            path[indexI-1][indexJ] = 1;
            find = findWord(board, word, path, indexI-1, indexJ, strIndex+1);
            path[indexI-1][indexJ] = 0;
        }
        
        return find;
    }
};
