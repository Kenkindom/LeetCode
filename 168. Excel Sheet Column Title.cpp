//C++ Code
//Title      Excel Sheet Column Title
//Difficulty Easy

class Solution {
public:
    string convertToTitle(int n) {
        string col;
        
        while(n > 0)
        {
            int rem = n % 26;
            if(rem == 0)
            {
                rem = 25;
                n--;
            }
            else
                rem -= 1;
            n = n / 26;
            
            string temp;
            temp += ('A'+rem);
            col.insert(0, temp);
        }
        
        return col;
    }
};
