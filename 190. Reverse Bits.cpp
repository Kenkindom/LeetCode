//C++ Code
//Title      Reverse Bits
//Difficulty Easy

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int index = 0;
        while(n > 0)
        {
            ans = (ans << 1) | (n & 1);
            n = n >> 1;
            index++;
        }
        
        while(index < 32)
        {
            ans = ans << 1;
            index++;
        }
        return ans;
    }
};
