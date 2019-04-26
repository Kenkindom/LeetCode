//C++ Code
//Title      Fizz Buzz
//Difficulty Easy

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> str;
        for(int i = 1; i <= n; i++)
        {
            if(i % 15 == 0)
                str.push_back("FizzBuzz");
            else if(i % 5 == 0)
                str.push_back("Buzz");
            else if(i % 3 == 0)
                str.push_back("Fizz");
            else
                str.push_back(to_string(i));
        }
        return str;
    }
};
