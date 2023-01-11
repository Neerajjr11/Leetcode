class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>>adj(n);
        for(auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        function<int (int, int)> dfs = [&](int cur, int parent){
            int time = 0, childTime;
            for(auto& child : adj[cur]){
                if(child == parent)
                    continue;
                childTime = dfs(child, cur);
                if(childTime or hasApple[child])
                    time += 2 + childTime;
            }
            return time;
        };
        return dfs(0,-1);
    }
};