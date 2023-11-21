//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int node, vector<int>adj[], vector<int>& vis){
        vis[node] = 1;
        // curr node and its parent
        queue<pair<int,int>>q;
        q.push({node, - 1});
        while(!q.empty()){
            int currnode = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto& neighbours : adj[currnode]){
                if(!vis[neighbours]){
                    vis[neighbours] = 1;
                    q.push({neighbours, currnode});
                }else if(parent != neighbours)
                    return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        bool res = false;
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                res = bfs(i, adj, vis);
                if(res == true)
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends