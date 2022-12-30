class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      // TC = (2^N X N)
        // SC = (2^N X N)
        vector<vector<int>> res;
        vector<int> path;
        path.push_back(0);
        function<void(vector<int>,int)> helper = [&](vector<int> path, int node) {
            if(node == graph.size() - 1){
                res.push_back(path);
                return;
            }
            for(int i : graph[node]){
                path.push_back(i);
                helper(path, i);
                path.erase(path.begin() + (path.size() - 1));
            }
        };
        helper(path, 0);
        return res;
    }
};