class Solution {
public:
    void solve(vector<vector<char>>& a) {
        int n = a.size(), m = a[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m));
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        
        auto is_valid = [&] (int x, int y) {
            if (x < 0 || y < 0 || x >= n || y >= m) return false;
            if (visited[x][y]) return false;
            if (a[x][y] == 'X') return false;
            return true;
        };
        
        vector<pair<int, int>> cells;
        function<void(int, int)> dfs = [&] (int x, int y) {
            visited[x][y] = true;
            cells.push_back({x, y});
            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if (is_valid(nx, ny)) {
                    dfs(nx, ny);
                }
            }
        };
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j] || a[i][j] == 'X') continue;
                
                cells.clear();
                dfs(i, j);
                bool is_border = false;
                for (auto &[x, y]: cells)
                    is_border |= x == 0 || y == 0 || x == n - 1 || y == m - 1;
                if (!is_border) {
                    for (auto &[x, y]: cells)
                        a[x][y] = 'X';
                }
            }
        }
    }
};