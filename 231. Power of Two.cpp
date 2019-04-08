//C++ Code
//Title      Power of Two
//Difficulty Easy

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        
        long i = 1;
        while(i < n)
            i *= 2;
        
        return (i == n) ? true : false;
    }
};
