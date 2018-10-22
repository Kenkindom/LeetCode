//C++ Code
//Title      Container With Most Water
//Difficulty Medium

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        // set container by upper triangle
        int maxcontainer = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int wid = j - i;
                int hei = height[i];
                if(hei > height[j])
                {
                    hei = height[j];
                }
                if(wid * hei > maxcontainer)
                {
                    maxcontainer = wid * hei;
                }
            }
        }
        
        return maxcontainer;
    }
};
