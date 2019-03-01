//C++ Code
//Title      Length of Last Word
//Difficulty Mediun

class Solution {
public:
    int lengthOfLastWord(string s) {
        int Len = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                if(i+1 < s.size() && s[i+1] != ' ')
                    Len = 0;
                continue;
            }
            Len++;
        }
        
        return Len;
    }
};
