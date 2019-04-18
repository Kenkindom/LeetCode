//C++ Code
//Title      Reverse String
//Difficulty Easy

class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0; i < s.size(); i++)
        {
            s.insert(s.begin(), s[i]);
            s.erase(s.begin()+i+1, s.begin()+i+2);
        }
    }
};
