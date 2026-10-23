class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;

        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                int profit = prices[j] - prices[i];
                maxi = max(maxi, profit);
            }
        }

        return max(maxi, 0);
    }
};
