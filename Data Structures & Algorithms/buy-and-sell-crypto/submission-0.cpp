class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int max_profit = 0;
        for(int i = 0;i<size-1;i++){
            for(int j = i+1; j<size; j++){
                if(prices[j]-prices[i] > max_profit){
                    max_profit = prices[j]-prices[i];
                }
            }
        }
        return max_profit;
    }
};
