class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1){
            return 0;
        }
        int buy=0,sell=1,best_buy=0,best_sell=1;
        int profit=prices[best_sell]-prices[best_buy];
        for(sell=1;sell<prices.size();sell++){
            for(buy=0;buy<sell;buy++){
                if(prices[sell]-prices[buy]>profit){
                    best_sell=sell;
                    best_buy=buy;
                    profit=prices[best_sell]-prices[best_buy];
                }
            }
        }
        return profit<0 ? 0:profit;
    }
};
