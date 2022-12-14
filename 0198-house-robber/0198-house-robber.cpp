class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        int negative = 0;
        for(int i = 1; i < nums.size(); i++){
            int pick = nums[i];
            if( i > 1)
                pick += dp[i - 2];
            int not_pick  = 0  + dp[i - 1];
            dp[i] = max(pick, not_pick);
        }
        return dp[nums.size() - 1];
    }
};