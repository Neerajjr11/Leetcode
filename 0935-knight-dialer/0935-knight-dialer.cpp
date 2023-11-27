class Solution {
public:
    vector<vector<vector<long>>> dp;
    long long mod = 1e9 + 7;
    
    long dfs(int n, int r, int c){
        if(r < 0 or r >= 4 or c < 0 or c >= 3 or (r == 3 and c != 1))
            return 0;
        if(n == 1)
            return 1;
        if(dp[r][c][n] > 0)
            return dp[r][c][n];
        dp[r][c][n] = dfs(n -1, r - 1, c - 2) % mod +
                      dfs(n - 1, r - 1, c + 2) % mod +
                      dfs(n - 1, r - 2, c - 1) % mod +
                      dfs( n - 1, r - 2, c + 1) % mod + 
                      dfs(n - 1, r + 1, c + 2) % mod +
                      dfs(n - 1, r + 1, c - 2) % mod +
                      dfs(n - 1, r + 2, c - 1) % mod +
                      dfs(n - 1, r + 2, c + 1) % mod;
        return dp[r][c][n];
    }
    
    int knightDialer(int n) {
        // same as unique paths need to find all unique paths but here we can move in 8 directions
        dp.resize(4, vector<vector<long>>(3, vector<long>(n + 1, -1)));
        long res = 0;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 3; j++){
                res = (res + dfs(n,i,j)) % mod;
            }
        }
        return (int)res;
    }
};