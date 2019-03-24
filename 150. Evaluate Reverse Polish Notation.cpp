//C++ Code
//Title      Evaluate Reverse Polish Notation
//Difficulty Medium

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int size = tokens.size();
        int index = 0;
        while(index < size)
        {
            if(tokens[index] == "+")
            {
                int a = stoi(tokens[index-2]);
                int b = stoi(tokens[index-1]);
                index -= 2;
                tokens[index] = to_string(a + b);
                tokens.erase(tokens.begin()+index+1, tokens.begin()+index+3);
                size -= 2;
            }
            else if(tokens[index] == "-")
            {
                int a = stoi(tokens[index-2]);
                int b = stoi(tokens[index-1]);
                index -= 2;
                tokens[index] = to_string(a - b);
                tokens.erase(tokens.begin()+index+1, tokens.begin()+index+3);
                size -= 2;
            }
            else if(tokens[index] == "*")
            {
                int a = stoi(tokens[index-2]);
                int b = stoi(tokens[index-1]);
                index -= 2;
                tokens[index] = to_string(a * b);
                tokens.erase(tokens.begin()+index+1, tokens.begin()+index+3);
                size -= 2;
            }
            else if(tokens[index] == "/")
            {
                int a = stoi(tokens[index-2]);
                int b = stoi(tokens[index-1]);
                index -= 2;
                tokens[index] = to_string(a / b);
                tokens.erase(tokens.begin()+index+1, tokens.begin()+index+3);
                size -= 2;
            }
            index++;
        }
        return stoi(tokens[0]);
    }
};
