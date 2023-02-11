class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<int>> graph(n); 
        vector<vector<vector<int>>> graphs(2,graph);
        queue<vector<int>> q; 
        for (auto b: blueEdges) {
          graphs[0][b[0]].push_back(b[1]);  
        } 
        for (auto r: redEdges) {        
          graphs[1][r[0]].push_back(r[1]); 
        } 
        int ans[n][2];
        memset(ans, 0, sizeof(ans));
        for (int j=1;j<n;j++) {
          ans[j][0] = n*2;
          ans[j][1] = n*2;  
        }
        q.push({0,1}); 
        q.push({0,0}); 
        while (!q.empty()) {
            vector<int> cur = q.front(); q.pop(); 
            int node = cur[0], color = cur[1];
            for (auto nei: graphs[color][node]) {
              if (ans[nei][color^1]==n*2) {  
                ans[nei][color^1] = ans[node][color]+1;  
                q.push({nei,color^1}); 
              }
            }
        }
        vector<int> res(n,0);
        for (int i=0;i<n;i++) {
          int cand = min(ans[i][0],ans[i][1]);
          res[i] = cand==n*2? -1: cand;  
        } 
        return res; 
    }
};