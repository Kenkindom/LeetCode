//C++ Code
//Title      Valid Palindrome
//Difficulty Easy

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0)
            return true;
        
        int i = 0, j = s.size()-1;
        while(i <= j)
        {
            while(i < s.size() && (s[i] < '0' || (s[i] > '9' && s[i] < 'A') || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z'))
                i++;
            while(j >= 0 && (s[j] < '0' || (s[j] > '9' && s[j] < 'A') || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z'))
                j--;
            
            if((i < s.size() && j >= 0) && (s[i] != s[j] && (((s[i] >= '0' && s[i] <= '9') || (s[j] >= '0' && s[j] <= '9')) || s[i]- s[j] != 32 && s[j] - s[i] != 32)))
                return false;
            i++;
            j--;
        }
        
        return true;
    }
};
