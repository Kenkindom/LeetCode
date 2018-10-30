//C++ Code
//Title      Generate Parentheses
//Difficulty Medium

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        // reference from https://ppt.cc/fyuKtx
        set<string> ans;
        
        if (n == 0) ans.insert("");
        else 
        {
            vector<string> pre = generateParenthesis(n - 1);
            for (auto p : pre) 
            {
                for (int i = 0; i < p.size(); ++i) 
                {
                    if (p[i] == '(') 
                    {
                        p.insert(p.begin() + i + 1, '(');
                        p.insert(p.begin() + i + 2, ')');
                        ans.insert(p);
                        p.erase(p.begin() + i + 1, p.begin() + i + 3);
                    }
                }
                ans.insert("()" + p);
            }
        }
        
        return vector<string>(ans.begin(), ans.end());
    }
};
