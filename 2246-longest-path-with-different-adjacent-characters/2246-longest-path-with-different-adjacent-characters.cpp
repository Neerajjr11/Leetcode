class Solution {
public:
    int result;
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        result = 0;
        unordered_map<int, vector<int>> adj;
        for(int i = 1; i < n; i++){
            int u = i;
            int v = parent[i];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        function<int (int, int)> dfs = [&](int curr, int parent){
            int longest = 0;
            int second_longest = 0;
            for(int &child : adj[curr]){
                if(child == parent)
                    continue;
                int child_longest_length = dfs(child, curr);
                if(s[child] == s[curr]) // if both adj nodes r same
                    continue;
                if(child_longest_length > second_longest)
                    second_longest = child_longest_length;
                if(second_longest > longest)
                    swap(longest, second_longest);
            }
            int any_1_path_is_good = max(longest, second_longest) + 1;
            int only_root_is_good = 1;
            int ans_in_subtree = longest + second_longest + 1;
            result = max({result, any_1_path_is_good, only_root_is_good, ans_in_subtree});
            return max(any_1_path_is_good, only_root_is_good);
        };
        dfs(0, -1);
        return result;
    }
};