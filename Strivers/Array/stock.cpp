// Buy Sell, 1 transaction

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 1) return 0;
        int maxProfit = 0;
        int minPrice = prices[0];
        for(int i = 1; i < n; i++)
        {
            int tot = prices[i] - minPrice;
            maxProfit = max(maxProfit, tot);
            minPrice = min(minPrice, prices[i]);
        }
        return maxProfit;
    }
};