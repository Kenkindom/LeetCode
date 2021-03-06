//C++ Code
//Title      Letter Combinations of a Phone Number
//Difficulty Medium

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // reference from https://ppt.cc/fskrVx
        if (digits.empty()) return {};
        vector<string> res{""};
        string dict[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for (int i = 0; i < digits.size(); ++i) {
            vector<string> t;
            string str = dict[digits[i] - '0'];
            for (int j = 0; j < str.size(); ++j) {
                for (string s : res) t.push_back(s + str[j]);
            }
            res = t;
        }
        return res;
    }
};
