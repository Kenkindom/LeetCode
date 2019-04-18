//C++ Code
//Title      Best Time to Buy and Sell Stock with Cooldown
//Difficulty Medium

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MIN, preBuy = 0, sell = 0, preSell = 0;
        for (int price : prices) 
        {
            preBuy = buy;
            buy = max(preSell - price, preBuy);
            preSell = sell;
            sell = max(preBuy + price, preSell);
        }
        return sell;
    }
};
