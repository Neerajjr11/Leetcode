class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // if first col is 0 we flip first row
        // else if others cols have 1's less that half of row size we flip the cols to maximize ones
        for(int i = 0; i < m; i++){
            if(grid[i][0] == 0){
                for(int j = 0; j < n; j++){
                    if(grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }
        for(int j = 1; j < n; j++){
            int total_ones = 0;
            for(int i = 0; i < m; i++){
                if(grid[i][j] == 1)
                    total_ones++;
            }
            if(total_ones <= m / 2){
                for(int k = 0; k < m; k++)
                    if(grid[k][j] == 0)
                        grid[k][j] = 1;
                    else
                        grid[k][j] = 0;
            }
        }
        int res = 0;
        for(int i = 0; i < m; i++){
            int base = 1;
            for(int j = n - 1; j >= 0; j--){
                if(grid[i][j] == 1)
                    res += base;
                base *= 2;
            }
        }
        return res;
    }
};