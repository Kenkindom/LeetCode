//C++ Code
//Title      String to Integer (atoi)
//Difficulty Medium

class Solution {
public:
    int myAtoi(string str) {        
        int isFirstNumeric = 0, isNeg = 0;
        int MIN_INT = -pow(2, 31), MAX_INT = pow(2, 31)-1;
        long long int ans = 0;
        for(int index = 0; index < str.size(); index++)
        {
            if(str[index] == ' ' && isFirstNumeric == 0)
            {
                continue;
            }
            else if(str[index] >= (int)'0' && str[index] <= (int)'9')
            {
                if(isFirstNumeric == 0)
                {
                    isFirstNumeric = 1;
                    // check this number is negtive
                    if(index > 0 && str[index-1] == '-')
                    {
                        isNeg = 1;
                    }
                }
                // char to number and accumulate
                int strInt = (int)str[index] - (int)'0';
                ans = ans * 10 + strInt;
                
                // if this number out of bound, return bound
                if(isNeg == 1)
                {
                    if(ans * (-1) < MIN_INT)
                        return MIN_INT;
                }
                else
                    if(ans > MAX_INT)
                        return MAX_INT;
            }
            else
            {
                // read char is '-' or '+' and next char is numeric
                if((str[index] == '+' || str[index] == '-') && index+1 < str.size() && str[index+1] >= (int)'0' && str[index+1] <= (int)'9')
                {
                    continue;
                }
                break;
            }
        }
        
        if(isNeg == 1)
            ans = ans * (-1);
        
        return ans;
    }
};
