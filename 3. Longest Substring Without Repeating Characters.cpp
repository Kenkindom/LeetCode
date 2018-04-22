//C++ Code
//Title      Longest Substring Without Repeating Characters
//Difficulty Medium

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int firstFlag = 0, isFind = 0;
                
        for(int i = 1; i < s.size(); i++)
        {
            for(int j = firstFlag; j < i; j++)
            {
                if(s[j] == s[i])
                {
                    if(i - firstFlag > length)
                    {
                        length = i - firstFlag;
                        isFind = 1;
                    }
                    firstFlag = j + 1;
                    break;
                }
            }
        }
        
        if(isFind == 0)
            length = s.size();
        if(s.size() - firstFlag > length)
            length = s.size() - firstFlag;
        
        return length;
    }
};
