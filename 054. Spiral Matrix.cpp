//C++ Code
//Title      Spiral Matrix
//Difficulty Mediun

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiralOrder;
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return spiralOrder;
        
        int m = matrix.size(), n = matrix[0].size();
        int step = 0, order = 1;
        int n1 = 0, n2 = n-1, m1 = 0, m2 = m-1;
        int i = 0, j = 0;
        
        while(step < m*n)
        {
            spiralOrder.push_back(matrix[i][j]);
            
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
        
        return spiralOrder;
    }
};
