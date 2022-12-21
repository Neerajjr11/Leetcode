class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(n+1);
        for(auto pair : dislikes){
            adj[pair[0]].push_back(pair[1]);
            adj[pair[1]].push_back(pair[0]);
        }
        unordered_map<int,int>color;  // 1=Red , 2=Blue 
        unordered_set<int>visited;
        queue<int>q;
        for(int i = 1; i <= n; i++){
            if(visited.find(i) == visited.end()){
                color[i] = 1;
                q.push(i);
                
                while(!q.empty()){
                    int u = q.front();
                    q.pop();
                    
                    if(visited.find(u)!=visited.end())
                        continue;
                    
                    for(int v: adj[u]){
                        if(color[v] == color[u])
                            return false;
                        
                        if(color[u] == 1)
                            color[v] = 2;
                        else
                            color[v] = 1;
                    
                        q.push(v);
                        
                        visited.insert(u);
                    }
                }
            }
        }
        
        return true;
    }
};