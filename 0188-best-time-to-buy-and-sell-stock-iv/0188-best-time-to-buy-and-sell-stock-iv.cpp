class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(prices.size() + 1, vector<vector<int>>(2, vector<int>(k + 1, 0)));
        // // if transac is 0
        // for(int ind = 0; ind < n; ind++){
        //     for(int buy = 0; buy <=1; buy++)
        //         dp[ind][buy][0] = 0;
        // }
        // // if ind is n
        // for(int buy = 0; buy <= 1; buy++){
        //     for(int cap = 0; cap<=2; cap++)
        //         dp[n][buy][cap] = 0;
        // }
        for(int ind = prices.size() - 1; ind >= 0; ind--){
            for(int buy = 0; buy <= 1; buy++){
                for(int cap = 1; cap <=k ; cap++){
                    int profit = 0;
                    if(buy ==1)
                        profit = max((-prices[ind] + dp[ind+1][0][cap]), (0 + dp[ind+1][1][cap]));
                    else
                        profit = max((prices[ind] + dp[ind+1][1][cap-1]), (0 + dp[ind+1][0][cap]));
                    dp[ind][buy][cap] = profit;
                }
            }
        }

        return dp[0][1][k];
    }
};