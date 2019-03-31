//C++ Code
//Title      Number of 1 Bits
//Difficulty Easy

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int number = 0;
        while(n > 0)
        {
            if(n & 1)
                number++;
            n = n >> 1;
        }
        
        return number;
    }
};
