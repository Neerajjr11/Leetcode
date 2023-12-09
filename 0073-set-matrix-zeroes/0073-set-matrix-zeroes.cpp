class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>rowCol;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0)
                    rowCol.push_back({i, j});
            }
        }
        for(int k = 0; k < rowCol.size(); k++){
            // to make all the rows 0
            for(int j = 0; j < n; j++)
                matrix[rowCol[k][0]][j] = 0;
            // to make all the cols 0
            for(int i = 0; i < m; i++)
                matrix[i][rowCol[k][1]] = 0;
        }
    }
};