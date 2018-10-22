//C++ Code
//Title      Roman to Integer
//Difficulty Easy

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int ii = 0; ii < s.size(); ii++)
        {
            if(s[ii] == 'I')
            {
                if(ii < s.size()-1 && s[ii+1] == 'V')
                {
                    ans = ans + 4;
                    ii++;
                }
                else if(ii < s.size()-1 && s[ii+1] == 'X')
                {
                    ans = ans + 9;
                    ii++;
                }
                else
                    ans = ans + 1; 
            }
            else if(s[ii] == 'V')
                ans = ans + 5;
            else if(s[ii] == 'X')
            {
                if(ii < s.size()-1 && s[ii+1] == 'L')
                {
                    ans = ans + 40;
                    ii++;
                }
                else if(ii < s.size()-1 && s[ii+1] == 'C')
                {
                    ans = ans + 90;
                    ii++;
                }
                else
                    ans = ans + 10;
            }
            else if(s[ii] == 'L')
                ans = ans + 50;
            else if(s[ii] == 'C')
            {
                if(ii < s.size()-1 && s[ii+1] == 'D')
                {
                    ans = ans + 400;
                    ii++;
                }
                else if(ii < s.size()-1 && s[ii+1] == 'M')
                {
                    ans = ans + 900;
                    ii++;
                }
                else
                    ans = ans + 100;
            }
            else if(s[ii] == 'D')
                ans = ans + 500;
            else if(s[ii] == 'M')
                ans = ans + 1000;
            
        }
        return ans;
    }
};
