//C++ Code
//Title      ZigZag Conversion
//Difficulty Medium

class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        if(numRows == 1)
            return s;
        
        int *step = new int[numRows-1]; 
        int *next = new int[s.size()];
        for(int i = 0; i < numRows - 1; i++)
        {
            if(i == 0)
                step[i] = numRows * 2 - 2;
            else
                step[i] = step[i-1] - 2;
        }
        
        for(int i = 0; i < s.size(); i++)
        {
            next[i] = step[i%(numRows-1)];
        }
        
        for(int i = 0; i < numRows; i++)
        {
            for(int j = i; j < s.size();)
            {
                ans = ans.append(s, j ,1);
                j = j + next[j];
            }
        }
        
        return ans;
    }
};

/*
index  0  1  2  3  4  5  6  7  8  9  10 11 12 13
string P  A  Y  P  A  L  I  S  H  I  R  I  N  G

next   6  5  4  9  8  7  12 11 10       13        numRows = 4 (6 4 2)
index  0->6->12, 1->5->7->11->13, 2->4->8->10, 3->9
       P  I  N   A  L  S  I   G   Y  A  H  R   P  I
       
next   8  7  6  5  12 11 10 9           13        numRows = 5 (8 6 4 2)
index  0->8, 1->7->9, 2->6->10, 3->5->11->13 4->12
       P  H  A  S  I  Y  I  R   P  L  I   G  A  N

next   10 9  8  7  6        13 12 11              numRows = 6 (10 8 6 4 2)
index  0->10, 1->9->11, 2->8->12, 3->7->13, 4->6, 5, 6
       P  R   A  I  I   Y  H  N   P  S  G   A  I  L  I
*/
