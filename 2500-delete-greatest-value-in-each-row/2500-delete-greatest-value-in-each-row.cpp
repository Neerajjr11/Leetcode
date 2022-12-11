class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        for(int i = 0 ; i < r; i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int res = 0;
        for(int i = 0 ; i < c; i++){
            int maxi = INT_MIN;
            for(int j = 0; j < r; j++){
                maxi = max(maxi, grid[j][i]);
            }
            res += maxi;
        }
        return res;
    }
};