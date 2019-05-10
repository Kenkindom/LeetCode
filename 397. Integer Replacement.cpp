//C++ Code
//Title      Integer Replacement
//Difficulty Medium

class Solution {
public:
    int integerReplacement(int n) {
        if(n == 1)
            return 0;
        
        if(n % 2 == 1)
        {
            long long temp = n;
            return min(integerReplacement((temp+1)/2), integerReplacement((n-1)/2)) + 2;
        }
        else
            return integerReplacement(n/2) + 1;
    }
};
