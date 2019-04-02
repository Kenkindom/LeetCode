//C++ Code
//Title      Isomorphic Strings
//Difficulty Easy

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        int size = s.size();
        while(size > 0)
        {
            string temp;
            for(int j = 1; j < size; j++)
            {
                if(s[0] == s[j])
                {
                    if(t[0] != t[j])
                        return false;
                    temp = temp.assign(s, 0, j);
                    temp = temp.append(s, j+1, size-(j+1));
                    s = temp;
                    temp = temp.assign(t, 0, j);
                    temp = temp.append(t, j+1, size-(j+1));
                    t = temp;
                    size--;
                    j--;
                }
                else if(t[0] == t[j])
                    return false;
            }
            temp = temp.assign(s, 1, size-1);
            s = temp;
            temp = temp.assign(t, 1, size-1);
            t = temp;
            size--;
        }
        
        return true;
    }
};
