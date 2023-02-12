class Solution {
public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        long long ans = 0;
        vector<vector<int>> graph(roads.size() + 1);
        for (vector<int>& r: roads) {
            graph[r[0]].push_back(r[1]);
            graph[r[1]].push_back(r[0]);
        }
        function<int(int, int)> dfs = [&](int i, int prev, int people = 1){
            for (int& x: graph[i]) {
                if (x == prev) continue;
                people += dfs(x, i);
            }
            if (i != 0) ans += (people + seats - 1) /seats;
            return people;
        };
        dfs(0, 0);
        return ans;
    }
};