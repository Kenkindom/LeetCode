//C++ Code
//Title      Reverse Vowels of a String
//Difficulty Easy

class Solution {
public:
    string reverseVowels(string s) {
        int left = 0, right = s.size()-1;
        while(left < right)
        {
            while(left < s.size() && isVowels(s[left]))
                left++;
            while(right >= 0 && isVowels(s[right]))
                right--;
            
            if(left < right)
            {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
            }
            left++;
            right--;
        }
        return s;
    }
    
    bool isVowels(char c)
    {
        return c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U';
    }
};
