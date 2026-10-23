class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX;
        int mp = 0;
        for(int i=0; i<prices.size(); i++){
            int profit = prices[i] - lowest;
            mp = max(mp, profit);
            lowest = min(lowest, prices[i]);
        } 

        return mp;
    }
};
