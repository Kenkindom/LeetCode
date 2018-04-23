//C++ Code
//Title      Palindrome Number
//Difficulty Easy

class Solution {
public:
    bool isPalindrome(int x) {
        int bitNumber = 0, temp = x;
        if(x < 0)
            return false;
        if(x == 0)
            return true;
        
        // count input number bit
        while(temp > 0)
        {
            bitNumber += 1;
            temp = temp / 10;
        }
        
        // only one bit is always palindrome
        if(bitNumber == 1)
            return true;
        
        for(int first = bitNumber-1, end = 0; first > end; first--, end++)
        {
            int firstNumber =0, endNumber = 0;
            firstNumber = (x / (int)pow(10, first)) % 10;
            endNumber = (x / (int)pow(10, end)) % 10;
            // not same number is not palindrome
            if(firstNumber != endNumber)
                return false;
        }
        
        return true;
    }
};
