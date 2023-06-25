class Solution {
public:
    const int mod = 1000000007;

    int solve(const vector<int>& locations, int city, int finish, int remainFuel, vector<vector<int>>& dp) {
        if (remainFuel < 0) {
            return 0;
        }
        
        if (dp[city][remainFuel] != -1) {
            return dp[city][remainFuel];
        }
        
        int total = city == finish ? 1 : 0;
        
        for (int nextCity = 0; nextCity < locations.size(); nextCity++) {
            if (nextCity != city && remainFuel >= abs(locations[nextCity] - locations[city])) {
                total = (total + solve(locations, nextCity, finish, remainFuel - abs(locations[nextCity] - locations[city]), dp)) % mod;
            }
        }
        
        return dp[city][remainFuel] = total;
    }

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n = locations.size();
        vector<vector<int>> dp(n, vector<int>(fuel + 1, -1));
        return solve(locations, start, finish, fuel, dp);
    }
};