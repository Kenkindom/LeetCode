//C++ Code
//Title      Set Matrix Zeroes
//Difficulty Medium

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return;
        
        vector<int> zeroI, zeroJ;
        
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == 0)
                {
                    zeroI.push_back(i);
                    zeroJ.push_back(j);
                }
            }
        }
        
        sort(zeroI.begin(), zeroI.end());
        sort(zeroJ.begin(), zeroJ.end());
        
        for(int i = 0; i < zeroI.size(); i++)
        {
            if(i > 0 && zeroI[i] == zeroI[i-1])
                continue;
            
            for(int j = 0; j < matrix[0].size(); j++)
                matrix[zeroI[i]][j] = 0;
        }
        
        for(int j = 0; j < zeroJ.size(); j++)
        {
            if(j > 0 && zeroJ[j] == zeroJ[j-1])
                continue;
            
            for(int i = 0; i < matrix.size(); i++)
                matrix[i][zeroJ[j]] = 0;
        }
    }
};
