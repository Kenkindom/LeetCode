//C++ Code
//Title      Happy Number
//Difficulty Easy

class Solution {
public:
    bool isHappy(int n) {
        vector<int> loop;
        while(n != 1)
        {
            int temp = 0;
            loop.push_back(n);
            while(n != 0)
            {
                temp = temp + (n%10) * (n%10);
                n = n / 10;
            }
            if(find(loop.begin(), loop.end(), temp) != loop.end())
                return false;
            n = temp;
        }
        
        return true;
    }
};
