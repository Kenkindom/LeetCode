//C++ Code
//Title      Kth Smallest Element in a Sorted Matrix
//Difficulty Medium

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return 0;
        
        vector<int> array;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
                array.push_back(matrix[i][j]);
        }
        sort(array.begin(), array.end());
        return array[k-1];
    }
};
