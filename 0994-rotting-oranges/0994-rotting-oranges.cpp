class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        // pair<int, int> stores the x and y of grid and int stores the time at which we are currently on
        // {{r, c}, t}
        queue<pair<pair<int,int>, int>> q;
        vector<vector<int>> vis(n, vector<int>(m,0));
        // travel
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }else{
                    vis[i][j] = 0;
                }
            }
        }
        int total_time = 0;
        vector<vector<int>> dir = {{-1, 0}, {0, 1}, {+1, 0}, {0, - 1}};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            total_time = max(total_time, t);
            q.pop();
            for(int i = 0; i < 4; i++){
                int neighbour_row = r + dir[i][0];
                int neighbour_col = c + dir[i][1];
                if(neighbour_row < n && neighbour_row >= 0 && neighbour_col < m && neighbour_col >= 0 && vis[neighbour_row][neighbour_col] != 2 && grid[neighbour_row][neighbour_col] == 1){
                    q.push({{neighbour_row, neighbour_col}, t + 1});
                    vis[neighbour_row][neighbour_col] = 2;
                    
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(vis[i][j] != 2 and grid[i][j] == 1)
                    return -1;
            }
        }
        return total_time;
    }
};