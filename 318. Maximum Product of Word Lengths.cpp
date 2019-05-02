//C++ Code
//Title      Maximum Product of Word Lengths
//Difficulty Medium

class Solution {
public:
    int maxProduct(vector<string>& words) {
        int max = 0;
        for(int i = 0; i < words.size(); i++)
        {
            unordered_map<char, int> m;
            for(int j = 0; j < words[i].size(); j++)
                m[words[i][j]]++;
            for(int j = i+1; j < words.size(); j++)
            {
                for(int k = 0; k < words[j].size(); k++)
                {
                    if(m[words[j][k]] != 0)
                        break;
                    if(k == words[j].size()-1)
                        max = max > (words[i].size() * words[j].size()) ? max : words[i].size() * words[j].size();
                    //cout << words[i] << words[j] << " " << max << endl;
                }
            }
        }
        return max;
    }
};
