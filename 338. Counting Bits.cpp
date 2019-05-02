//C++ Code
//Title      Counting Bits
//Difficulty Medium

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> bits;
        bits.push_back(0);
        if(num == 0)
            return bits;
        bits.push_back(1);
        if(num == 1)
            return bits;
        int index = 0, maxIndex = 2;
        for(int i = 2; i <= num; i++)
        {
            bits.push_back(1+bits[index]);
            index++;
            if(index == maxIndex)
            {
                index = 0;
                maxIndex *= 2;
            }
        }
        return bits;
    }
};
