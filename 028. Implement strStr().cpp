//C++ Code
//Title      Implement strStr()
//Difficulty Easy

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(haystack.size() == 0) return -1;
        
        for(int ii = 0, jj = 0; ii < haystack.size(); ii++)
        {
            if(haystack[ii] == needle[jj])
            {
                jj++;
                if(jj == needle.size()) return ii-needle.size()+1;
            }
            else if(jj > 0)
            {
                ii = ii - jj;
                jj = 0;
            }
        }
        return -1;
    }
};
