class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lastPrice = prices[0];
        int profit = 0;

        for(int i=0; i<prices.size()-1; i++){

            lastPrice = prices[i];	

            if (lastPrice < prices[i+1])
                profit+=prices[i+1]-lastPrice;     //accumulate the profit when the current price is higher than the last price

        }

        return profit;
    }
};