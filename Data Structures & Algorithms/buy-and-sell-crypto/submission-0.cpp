class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = INT_MAX;
        int bestTime = 0, n = prices.size();

        for(int i=0; i<n; i++){
            bestBuy = min(bestBuy,prices[i]);

            bestTime = max(bestTime, (prices[i] - bestBuy));
        }
        return bestTime;
    }
};
