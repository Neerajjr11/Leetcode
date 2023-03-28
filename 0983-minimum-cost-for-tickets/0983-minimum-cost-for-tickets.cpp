class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int>dp(366, 0);
        
        for(auto day: days)
            dp[day] = costs[0];
        for(int i = 1; i <= days[n-1]; i++){
            if(!dp[i])
                dp[i] = dp[i-1];
            else{
                dp[i] = dp[i-1] + costs[0];
                int j = max(0, i-7);
                dp[i] = min(dp[i], dp[j] + costs[1]);
                j = max(0, i-30);
                dp[i] = min(dp[i], dp[j] + costs[2]);
            }
        }
        
        return dp[days[n-1]];
    }
};