//C++ Code
//Title      Valid Parentheses
//Difficulty Easy

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        
        for(int ii = 0; ii < s.size(); ii++)
        {
            if(s[ii] == '(' || s[ii] == '[' || s[ii] == '{')
            {
                stack.push_back(s[ii]);
            }
            else if((s[ii] == ')' || s[ii] == ']' || s[ii] == '}') && stack.size() == 0)
            {
                return false;
            }
            else if(s[ii] == ')')
            {
                if(stack.back() == '(')
                {
                    stack.pop_back();
                }
                else
                    return false;
            }
            else if(s[ii] == '}')
            {
                if(stack.back() == '{')
                {
                    stack.pop_back();
                }
                else
                    return false;
            }
            else if(s[ii] == ']')
            {
                if(stack.back() == '[')
                {
                    stack.pop_back();
                }
                else
                    return false;
            }
        }
        
        if(stack.size() != 0) return false;
        else return true;
    }
};
