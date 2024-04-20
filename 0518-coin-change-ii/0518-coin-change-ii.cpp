class Solution {
public:
    int helper(int ind, int amount, vector<int>& coins, vector<vector<int>>& dp){
        if(amount < 0)
            return 0;
        if(amount == 0)
            return 1;
        if(ind == coins.size())
            return 0;
        if(dp[ind][amount] != -1)
            return dp[ind][amount];
        int take = helper(ind, amount - coins[ind], coins, dp);
        int not_take = helper(ind + 1, amount, coins, dp);
        return dp[ind][amount] = (take + not_take) ;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp (n, vector<int>(amount + 1, -1));
        int res = helper(0, amount, coins, dp);
        return res;
        
    }
};