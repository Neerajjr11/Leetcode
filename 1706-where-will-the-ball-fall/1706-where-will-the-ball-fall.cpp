class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<int> ans(col, -1);
        for (int c = 0; c < col; c++)
        {
            int curCol = c;
            bool stuck = false;
            for (int r = 0; r < row; r++)
            {
                int nextCol = curCol + grid[r][curCol];
                if (nextCol < 0 || nextCol >= col || grid[r][curCol] != grid[r][nextCol])
                {
                    stuck = true;
                    break;
                }
                curCol = nextCol;
            }
            if (!stuck)
            {
                ans[c] = curCol;
            }
        }
        return ans;
    }
};