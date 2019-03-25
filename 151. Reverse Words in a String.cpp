//C++ Code
//Title      Reverse Words in a String
//Difficulty Medium

class Solution {
public:
    string reverseWords(string s) {
        string reverseS;
        
        int preIndex = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                string temp;
                temp = temp.assign(s, preIndex, i-preIndex);
                temp = temp.append(" ", 0, 1);
                reverseS.insert(0, temp);
                while(i < s.size()-1 && s[i] == ' ' && s[i+1] == ' ')
                    i++;
                preIndex = i+1;
            }
        }
        if(s[s.size()-1] != ' ')
        {
            string temp;
            temp = temp.assign(s, preIndex, s.size()-preIndex);
            temp = temp.append(" ", 0, 1);
            reverseS.insert(0, temp);
        }
        
        int indexS = reverseS.size()-1;
        while(reverseS[indexS] == ' ')
            indexS--;
        
        reverseS = reverseS.assign(reverseS, 0, indexS+1);
        
        return reverseS;
    }
};
