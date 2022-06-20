class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = 0;
        int max_profit = 0;
        int profit;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < prices[minimum])
                minimum = i;
            profit = prices[i] - prices[minimum];
            if(profit >= max_profit)
                max_profit = profit;
        }
        return max_profit;
    }
};