//C++ Code
//Title      Count and Say
//Difficulty Easy

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        
        string say = "1", tempSay = "";
        for(int i = 2; i <= n; i++)
        {
            int count = 0, j = 0;
            for(; j < say.size(); j++)
            {
                if(j == 0)
                {
                    count++;
                    continue;
                }
                if(say[j] == say[j-1])
                    count++;
                else
                {
                    tempSay = tempSay + to_string(count) + say[j-1];
                    count = 1;
                }
            }
            tempSay = tempSay + to_string(count) + say[j-1];
            say = tempSay;
            tempSay = "";
        }
        
        return say;
    }
};
