class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int ans  = 0;
        for(int i  = 0; i < prices.size(); i++){
            if(mini > prices[i]){
                mini = prices[i];
            }
            ans = max(ans, prices[i] - mini);
        }
        return ans;
        
    }
};