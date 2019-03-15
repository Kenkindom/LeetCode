//C++ Code
//Title      Best Time to Buy and Sell Stock
//Difficulty Easy

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            for(int j = i+1; j < prices.size(); j++)
                maxProfit = max(maxProfit, prices[j]-prices[i]);
        }
        
        return maxProfit;
    }
};
