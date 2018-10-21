//C++ Code
//Title      Regular Expression Matching
//Difficulty Hard

class Solution {
public:
    bool isMatch(string s, string p) {
        // reference from https://ppt.cc/fNoyix
        
        if(p.empty()) return s.empty();
        if(p.size() > 1 && p[1] == '*'){
            return (!s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p)) || isMatch(s, p.substr(2));
        }
        else{
            return (!s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1)));
        }
    }
};
