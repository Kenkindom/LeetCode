//C++ Code
//Title      First Unique Character in a String
//Difficulty Easy

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        
        for(int i = 0; i < s.size(); i++)
            m[s[i]]++;
        
        for(int i = 0; i < s.size(); i++)
            if(m[s[i]] == 1)
                return i;
        return -1;
    }
};
