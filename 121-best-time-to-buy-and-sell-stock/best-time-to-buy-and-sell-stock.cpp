class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int maxP = 0, bestBuy = prices[0];

        for(int i = 1; i < n ; i++){
            if(prices[i] > bestBuy){
                maxP = max( maxP, prices[i] - bestBuy);
            }
            bestBuy = min( bestBuy, prices[i]);
        }
        return maxP;
    }
};