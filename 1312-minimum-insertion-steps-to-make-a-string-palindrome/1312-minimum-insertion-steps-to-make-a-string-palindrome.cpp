class Solution {
public:
    int minInsertions(string s) {
        //same as find the longest sub palindrome subsequence
        // then subtract the length of the longest palindrome to the length of the string that will give you tne number of insertions required
        string s1 = s;
        reverse(s.begin(), s.end());
        int n = s.size();
        int m = n;
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        for(int i = 0; i <= n; i++) dp[i][0] = 0;
        for(int j = 0; j <= m; j++) dp[0][j] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s[i - 1] == s1[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return abs(n - dp[n][m]);
    }
};