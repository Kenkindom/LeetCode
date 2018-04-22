//C++ Code
//Title      Reverse Integer
//Difficulty Easy

class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        int negFlag = 0;
        if(x < 0)
        {
            if(x == -pow(2, 31)) return 0;
            negFlag = 1;
            x = x * (-1);
        }
        int MAX_INT = pow(2, 31) - 1;
        while(x > 0)
        {
            ans = ans * 10 + x % 10;
            x = x / 10;
            if(ans > MAX_INT)
            {
                return 0;
            }
        }
        if(negFlag == 1) {ans = ans * (-1);}
        return ans;
    }
};
