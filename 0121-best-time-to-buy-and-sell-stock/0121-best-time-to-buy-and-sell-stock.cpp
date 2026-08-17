class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int n = prices.size();
        int buy = prices[0];
        for(int i=0; i<n; i++){
            int profit = prices[i] - buy ;
            if(profit < 0){
                buy = prices[i]; 
            }else{
                maxp = max(maxp, profit);
            }
            
        }
        return maxp;
    }
};