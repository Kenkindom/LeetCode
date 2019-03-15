//C++ Code
//Title      Pascal's Triangle II
//Difficulty Easy

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal;
        vector<int> temp;
        
        for(int i = 0; i <= rowIndex; i++)
        {
            vector<int> pascalRow;
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || j == i)
                    pascalRow.push_back(1);
                else
                    pascalRow.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
            }
            if(i == rowIndex)
                return pascalRow;
            else
                pascal.push_back(pascalRow);
        }
        return temp;
    }
};
