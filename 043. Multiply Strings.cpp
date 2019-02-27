//C++ Code
//Title      Multiply Strings
//Difficulty Mediun

class Solution {
public:
    string multiply(string num1, string num2) {
        string ans(num1.size()+num2.size(), '0');
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        for(int i = 0; i < num2.size(); i++)
        {
            int carry = 0;
            int val = num2[i] - '0';
            for(int j = 0; j < num1.size(); j++)
            {
                carry += ((num1[j]-'0')*val + (ans[i+j]-'0'));
                ans[i+j] = carry % 10 + '0';
                carry = carry / 10;
            }
            if(carry != 0)
                ans[num1.size()+i] = carry + '0';
        }
        reverse(ans.begin(), ans.end());
        
        int count = 0;
        while(count<ans.size()-1 && ans[count]=='0') 
            count++;
        ans.erase(0,count);
                    
        return ans;
    }
};
