//C++ Code
//Title      Spiral Matrix II
//Difficulty Mediun

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> row;
        row.assign(n ,0);
        vector<vector<int>> matrix;
        matrix.assign(n, row);
        
        int step = 1, order = 1;
        int n1 = 0, n2 = n-1, m1 = 0, m2 = n-1;
        int i = 0, j = 0;
        
        while(step <= n*n)
        {
            matrix[i][j] = step;
            
            if(order == 1)
            {
                if(j == n2)
                {
                    order = 2;
                    m1++;
                    i++;
                }
                else
                    j++;
            }
            else if(order == 2)
            {
                if(i == m2)
                {
                    order = 3;
                    n2--;
                    j--;
                }
                else
                    i++;
            }
            else if(order == 3)
            {
                if(j == n1)
                {
                    order = 4;
                    m2--;
                    i--;
                }
                else
                    j--;
            }
            else if(order == 4)
            {
                if(i == m1)
                {
                    order = 1;
                    n1++;
                    j++;
                }
                else
                    i--;
            }
            
            step++;
        }
        
        return matrix;
    }
};
