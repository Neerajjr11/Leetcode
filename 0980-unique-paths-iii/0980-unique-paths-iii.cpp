class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        // two cases
        // first get x and y coord of start and end squares
        // then count the total 0's
        // use dfs and backtracking to get all possible paths in 4 directions
        // compare the 0's in each path to the total 0's
        // if both same increment the counter
        int zero_count = 0, start_x = 0, start_y = 0;
        for(int r = 0; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){
                if(grid[r][c] == 0)
                    zero_count++;
                else if(grid[r][c] == 1){
                    start_x = r;
                    start_y = c;
                }
            }
        }
        
        function<int(vector<vector<int>>, int, int, int)> dfs = [&](vector<vector<int>> grid, int x, int y, int zero_count){
            if(x < 0 or y < 0 or x >= grid.size() or y >= grid[0].size() or grid[x][y] == -1)
                return 0;
            if(grid[x][y] == 2)
                return zero_count == -1 ? 1 : 0;
            grid[x][y] = -1;
            zero_count--;
            int totalPaths = dfs(grid, x + 1, y, zero_count) + 
                dfs(grid, x, y + 1, zero_count) + 
                dfs(grid, x - 1, y, zero_count) + 
                dfs(grid, x, y - 1, zero_count);
            // bactracking
            grid[x][y] = 0;
            zero_count++;
            return totalPaths;
        };
        return dfs(grid, start_x, start_y, zero_count);
    }
};