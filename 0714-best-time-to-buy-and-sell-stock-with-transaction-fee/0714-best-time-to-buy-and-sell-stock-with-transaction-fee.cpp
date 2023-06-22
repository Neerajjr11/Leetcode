class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int max_profit = 0;
        int s1 = INT_MIN;
        for(int i = 0; i < prices.size(); i++){
            int helper = max_profit;
            max_profit = max(max_profit, s1 + prices[i]);
            s1 = max(s1, helper - prices[i] - fee);
        }
        return max_profit;
    }
};