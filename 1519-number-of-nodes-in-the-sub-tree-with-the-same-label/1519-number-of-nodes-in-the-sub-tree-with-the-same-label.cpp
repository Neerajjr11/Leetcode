class Solution {
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n);
        for(auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int>res(n,0);
        function<vector<int> (int, int)> traverse = [&](int node, int parent){
            vector<int> current_freq(26, 0);
            for(auto& child : adj[node]){
                if(child == parent){
                    continue;
                }
                vector<int> freq = traverse(child, node);
                for(int i = 0; i < 26; i++)
                    current_freq[i] += freq[i];
            }
            current_freq[labels[node] - 'a'] += 1;
            res[node] = current_freq[labels[node] - 'a'];
            return current_freq;
        };
        traverse(0, -1);
        return res;
    }
};