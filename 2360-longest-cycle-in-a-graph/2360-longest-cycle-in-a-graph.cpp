class Solution {
public:
    int hasCycle(int sv, vector<vector<int>> &edges, vector<bool> &vis, set<int> &s){
        vis[sv] = true;
        s.insert(sv);
        for(int i = 0; i < edges[sv].size(); i++){
            if(s.find(edges[sv][i]) != s.end())
                return sv;
            if(!vis[edges[sv][i]]){
                int x = hasCycle(edges[sv][i], edges, vis, s);
                if(x != -1)
                    return x;
            }
        }
        s.erase(sv);
        return -1;

    }
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<vector<int>> v(n);
        // reverse the connections of the graphs so that we only traverse for the cycles
        // instead of traversing all the vertices of the graphs
        for(int i = 0; i < n; i++)
            if(edges[i] != -1)
                v[edges[i]].push_back(i);
        vector<bool> vis(edges.size(), false);
        int ans = -1;
        for(int i = 0; i < n; i++){
            if(vis[i])
                continue;
            set<int> s;
            // to check for connected components
            int getAns = hasCycle(i, v, vis, s);
            if(getAns >  -1){
                int c = 1;
                int sv = i;
                while(edges[sv] != i){
                    sv = edges[sv];
                    c++;
                }
                ans = max(ans, c);
            }
        }
        return ans;
    }
};