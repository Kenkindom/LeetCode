//C++ Code
//Title      Word Pattern
//Difficulty Easy

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> m;
        istringstream in(str);
        int i = 0, n = pattern.size();
        for (string word; in >> word; ++i) {
            if (m.count(pattern[i])) 
            {
                if (m[pattern[i]] != word) 
                    return false;
            } 
            else 
            {
                for (auto a : m) 
                {
                    if (a.second == word) 
                        return false;
                }
                m[pattern[i]] = word;
            }
        }
        return i == n;
    }
};
