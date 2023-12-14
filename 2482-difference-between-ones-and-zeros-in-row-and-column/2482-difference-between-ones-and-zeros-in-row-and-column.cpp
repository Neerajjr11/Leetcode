class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        unordered_map<int, int> onesRow, onesCol, zerosRow, zerosCol;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    onesRow[i]++;
                    onesCol[j]++;
                }else{
                    zerosRow[i]++;
                    zerosCol[j]++;
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                grid[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j]; 
            }
        }
        return grid;
    }
};