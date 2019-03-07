//C++ Code
//Title      Unique Binary Search Trees
//Difficulty Medium

class Solution {
public:
    int numTrees(int n) {
        vector<int> number(n+1, 0);
        number[0] = 1;
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                number[i] += number[j] * number[i-1-j];
            }
        }
        return number[n];
    }
};
