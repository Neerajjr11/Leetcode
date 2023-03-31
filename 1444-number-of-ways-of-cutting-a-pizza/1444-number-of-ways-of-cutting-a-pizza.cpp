class Solution {
public:
    int MOD = 1e9 + 7;
    int memo[51][51][11];
    int prefix[51][51];
    int n, m;
    int ways(vector<string>& A, int k) {
        n = A.size(), m = A[0].size();
        memset(memo, -1, sizeof(memo));
        memset(prefix, 0, sizeof(prefix));
        for(int i = n - 1; i >= 0; i--)
            for(int j = m - 1; j >= 0; j--){
                if(i < n - 1)
                    prefix[i][j] += prefix[i + 1][j];
                if(j < m - 1)
                    prefix[i][j] += prefix[i][j + 1];
                prefix[i][j] += (A[i][j] == 'A');
                if(i < n - 1 && j < m - 1)
                    prefix[i][j] -= prefix[i + 1][j + 1];
            }
        return dp(A, 0, 0, k - 1);
    }
    int dp(vector<string>& A, int x1, int y1, int k){
        if(!k)
            return prefix[y1][x1] > 0;
        if(memo[x1][y1][k] != -1)
            return memo[x1][y1][k];
        int ans = 0;
        for(int i = x1 + 1; i < m; i++)
            if(prefix[y1][x1] - prefix[y1][i] > 0)
                ans += dp(A, i, y1, k - 1), ans %= MOD;
        for(int i = y1 + 1; i < n; i++)
            if(prefix[y1][x1] - prefix[i][x1] > 0)
                ans += dp(A, x1, i, k - 1), ans %= MOD;
        return memo[x1][y1][k] = ans;
    }
};