class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();

        vector<int> zerorow(m,0);vector<int> onerow(m,0);vector<int> zerocol(n,0);vector<int> onecol(n,0);
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 1)
                {
                    onerow[i]+=1;
                    onecol[j]+=1;
                }
                else{
                    zerorow[i]+=1;
                    zerocol[j]+=1;
                }
            }
        }
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                grid[i][j] = onerow[i] + onecol[j] - zerorow[i] - zerocol[j];
            }
        }
        return grid;
    }
};