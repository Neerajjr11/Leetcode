#define rall(x) (x).rbegin(), (x).rend()
class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        vector<vector<int>> adj(vals.size());
        int max_sum = INT_MIN;
        for(int i = 0; i < edges.size(); i++){
            int ed1 = edges[i][0];
            int ed2 = edges[i][1];
            if(vals[ed1] > 0) 
                adj[ed2].push_back(vals[ed1]);
            if(vals[ed2] > 0) 
                adj[ed1].push_back(vals[ed2]);
        }
        for(int i = 0; i< vals.size(); i++){
            sort(rall(adj[i]));
            int total = vals[i];
            int val = min(k , (int)adj[i].size());
            for(int j = 0; j < val; j++) 
                total += adj[i][j];
            max_sum = max(max_sum,total);
        }
        return max_sum;
    }
};