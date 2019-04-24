//C++ Code
//Title      Sum of Two Integers
//Difficulty Easy

class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0, sum, res = 0, k = 0;
        while(a != 0 || b != 0 || k < 32)
        {
            int x = (a & 1) != 0 ? 1 : 0;
            int y = (b & 1) != 0 ? 1 : 0;
            a >>= 1;
            b >>= 1;

            sum = (x + y + carry) % 2;
            carry = (x + y + carry) / 2;
            sum = sum << k;
            res = res | sum;
            k++;
            if(k > 31)
                break;       
        } 
        return res;
    }
};
