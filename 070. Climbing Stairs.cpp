//C++ Code
//Title      Climbing Stairs
//Difficulty Easy

class Solution {
public:
    int climbStairs(int n) {
        if(n == 0)
            return 1;
        if(n == 1 || n == 2)
            return n;
        
        vector<long> stepArray;
        stepArray.assign(n, 0);
        
        stepArray[0] = 1;
        stepArray[1] = 2;
        for(int i = 2; i < n; i++)
            stepArray[i] = stepArray[i-1] + stepArray[i-2];
        
        return stepArray[n-1];
    }
};
