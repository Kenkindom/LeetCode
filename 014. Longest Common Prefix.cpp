//C++ Code
//Title      Longest Common Prefix
//Difficulty Easy

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        
        if(strs.size() == 0)
            return ans;
        
        int ii = 0;
        while(1)
        {
            // Check No Out Of Bound
            for(int jj = 0; jj < strs.size(); jj ++)
            {
                if(ii >= strs[jj].size())
                    return ans;
            }
            
            // Check Index ii Site Is Same
            for(int jj = 1; jj < strs.size(); jj++)
            {
                if(strs[0][ii] != strs[jj][ii])
                    return ans;
            }
            ans = ans + strs[0][ii];
            ii++;
        }
        
        return "";
    }
};
