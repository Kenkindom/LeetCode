//C++ Code
//Title      Elimination Game
//Difficulty Medium

class Solution {
public:
    int lastRemaining(int n) {
        // Reference From https://reurl.cc/robQ1
        return help(n, true);    
    }
    
    int help(int n, bool left2right) {
        if (n == 1) 
            return 1;
        
        if (left2right) 
            return 2 * help(n / 2, false);
        else 
            return 2 * help(n / 2, true) - 1 + n % 2;
        
    }
};
