class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int best_buy = prices[0];
        int best_sell = prices[0];
        int max_profit = 0;
        for(int i=0; i<n; i++){
            if (prices[i] - best_buy > max_profit){
                best_sell = prices[i];
                max_profit = prices[i] - best_buy;
            }else if(prices[i] < best_buy){
                best_buy = prices[i];
            }
        }
        return max_profit;
    }
};