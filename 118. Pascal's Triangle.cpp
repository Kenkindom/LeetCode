//C++ Code
//Title      Pascal's Triangle
//Difficulty Easy

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        if(numRows == 0)
            return pascal;
        
        for(int i = 0; i < numRows; i++)
        {
            vector<int> pascalRow;
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || j == i)
                    pascalRow.push_back(1);
                else
                    pascalRow.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
            }
            pascal.push_back(pascalRow);
        }
        
        return pascal;
    }
};
