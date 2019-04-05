//C++ Code
//Title      Basic Calculator II
//Difficulty Medium

class Solution {
public:
    int calculate(string s) {
        long num = 0, curRes = 0, res = 0;
        char op = '+';
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] <= '9' && s[i] >= '0')
                num = num * 10 + s[i] - '0';
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || i == s.size()-1)
            {
                switch(op)
                {
                    case '+':
                        curRes += num;
                        break;
                    case '-':
                        curRes -= num;
                        break;
                    case '*':
                        curRes *= num;
                        break;
                    case '/':
                        curRes /= num;
                        break;
                }
                if(s[i] == '+' || s[i] == '-' || i == s.size()-1)
                {
                    res += curRes;
                    curRes = 0;
                }
                
                op = s[i];
                num = 0;
            }
        }
        
        return res;
    }
};
