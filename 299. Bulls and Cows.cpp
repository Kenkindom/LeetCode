//C++ Code
//Title      Bulls and Cows
//Difficulty Medium

class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char, int> map1, map2;
        int numberA = 0, numberB = 0;
        for(int i = 0; i < secret.size(); i++)
        {
            if(secret[i] == guess[i])
                numberA++;
            else
            {
                if(map1[secret[i]])
                    map1[secret[i]]++;
                else
                    map1[secret[i]] = 1;
                
                if(map2[guess[i]])
                    map2[guess[i]]++;
                else
                    map2[guess[i]] = 1;
            }
        }
        
        unordered_map<char, int>::iterator iter;
        for(iter = map1.begin(); iter != map1.end(); iter++)
            numberB += (map1[iter->first] < map2[iter->first] ? map1[iter->first] : map2[iter->first]);
        
        string ans = to_string(numberA) + "A" + to_string(numberB) + "B";
        return ans;
    }
};
