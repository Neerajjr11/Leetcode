class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0], maxProf = 0;
        for(int i = 1; i < prices.size(); i++){
            maxProf = max(maxProf, (prices[i] - mini));
            mini = min(mini, prices[i]);
        }
        return maxProf;
    }
};