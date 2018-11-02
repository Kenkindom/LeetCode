//C++ Code
//Title      Divide Two Integers
//Difficulty Medium

class Solution {
public:
    int divide(int dividend, int divisor) {
        // reference from https://ppt.cc/fIiWQx
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(divisor == 1) return dividend;
        
        int Neg = 0;
        if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)) Neg = 1;
        
        unsigned long long divid = abs((long long) dividend);
        unsigned long long divis = abs((long long) divisor);
        unsigned long long divis_origin = divis;
        
        int i = 0;
        while(divis<<(i+1) <= divid) i++;
        
        int ans = 0;
        while(divid >= divis_origin) {
            if(divid >= divis << i) {
                divid -= divis << i;
                ans += 1 << i;
            }
            i--;
        }
        
        if(Neg == 1) ans *= -1;
        return ans;
    }
};
