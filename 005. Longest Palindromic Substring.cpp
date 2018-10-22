//C++ Code
//Title      Longest Palindromic Substring
//Difficulty Medium

class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = i + 1; j < s.size(); j++)
            {
                if(s[i] == s[j])
                {
                    int isntSame = 0;
                    for(int ii = i+1, jj = j-1; ii <= jj ; ii++, jj--)
                    {
                        if(s[ii] != s[jj])
                        {
                            isntSame = 1;
                            break;
                        }
                    }
                    if(isntSame == 0 && j-i+1 > ans.size())
                    {
                        ans = ans.assign(s, i, j-i+1);
                    }
                }
            }
        }
        
        if(ans.size() == 0)
        {
            ans = ans.assign(s, 0, 1);
        }
        return ans;
    }
};
