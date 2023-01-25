class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int res = -1, min_dist = INT_MAX;
        vector<int> m1(edges.size(), -1), m2(edges.size(), -1);
        function<void(int, int, vector<int>&)> dfs = [&] (int i, int dist, vector<int>& memo){
            while (i != -1 && memo[i] == -1) {
                memo[i] = dist++;
                i = edges[i];
            }
        };
        dfs(node1, 0, m1);
        dfs(node2, 0, m2);
        for (int i = 0; i < edges.size(); ++i)
            if (min(m1[i], m2[i]) >= 0 && max(m1[i], m2[i]) < min_dist) {
                min_dist = max(m1[i], m2[i]);
                res = i;
            }
        return res;
    }
};