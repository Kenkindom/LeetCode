//C++ Code
//Title      Integer to Roman
//Difficulty Medium

class Solution {
public:
    string intToRoman(int num) {
        string ans;
        string roman[8] = {"", "I", "V", "X", "L", "C", "D", "M"};
        int split_num[4] = {0};
        int temp_num = num;
        
        // set every digit
        for(int ii = 0; ii < 4 && temp_num != 0; ii++)
        {
            split_num[ii] = temp_num % 10;
            temp_num = temp_num / 10;
        }
        
        for(int ii = 4-1; ii >= 0; ii--)
        {
            int string_index = ii * 2 + 1;
            if(split_num[ii] == 0)
                continue;
            // specail case, 4 or 9
            if(split_num[ii] % 10 == 4)
            {
                ans = ans + roman[string_index] + roman[string_index+1];
            }
            else if(split_num[ii] % 10 == 9)
            {
                ans = ans + roman[string_index] + roman[string_index+2];
            }
            else
            {
                int temp = 0;
                // check larger than 5 or not
                if (split_num[ii] % 10 >= 5)
                {
                    ans = ans + roman[string_index+1];
                    temp = split_num[ii] % 10 - 5;
                }
                else
                {
                    temp = split_num[ii] % 5;
                }
                // set remain number
                for(int i = 0; i < temp; i++)
                {
                    ans = ans + roman[string_index];
                }
            }
        }
        
        return ans;
    }
};
