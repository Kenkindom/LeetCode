//C++ Code
//Title      Add Binary
//Difficulty Easy

class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() == 0)
            return b;
        if(b.size() == 0)
            return a;
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        string ans;
        
        int i = 0, carry = 0, sum = 0;
        for(; i < a.size() && i < b.size(); i++)
        {
            sum = (a[i] - '0') + (b[i] - '0') + carry;
            carry = sum / 2;
            ans += ((sum % 2) + '0');
        }
        
        if(i < a.size())
        {
            while(i < a.size())
            {
                sum = (a[i] - '0') + carry;
                carry = sum / 2;
                ans += ((sum % 2) + '0');
                i++;
            }
        }
        else
        {
            while(i < b.size())
            {
                sum = (b[i] - '0') + carry;
                carry = sum / 2;
                ans += ((sum % 2) + '0');
                i++;
            }
        }
        
        if(carry != 0)
            ans += (carry + '0');
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
