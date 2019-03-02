//C++ Code
//Title      Plus One
//Difficulty Easy

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 0)
        {
            digits.insert(digits.begin(), 1);
            return digits;
        }
        
        int carry = 0;
        
        int i = digits.size()-1;
        digits[i] = digits[i] + 1;
        
        for(; i >= 0; i--)
        {
            digits[i] = digits[i] + carry;
            carry = digits[i] / 10;
            digits[i] = digits[i] % 10;
            if(carry == 0)
                break;
        }
        
        if(carry != 0)
            digits.insert(digits.begin(), carry);
        
        return digits;
    }
};
