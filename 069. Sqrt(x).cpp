//C++ Code
//Title      Sqrt(x)
//Difficulty Easy

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        
        long i = 1;
        for(; (i+1)*(i+1) <= x; i++);
        
        return i;
    }
};
