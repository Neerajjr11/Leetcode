class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int rowSize = rowSum.size();
        int colSize = colSum.size();
        vector<vector<int>> mat(rowSize, vector<int>(colSize, 0));
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < colSize; j++){
                int mini = min(rowSum[i], colSum[j]);
                mat[i][j] = mini;
                rowSum[i] -= mini;
                colSum[j] -= mini;
            }
        }
        return mat;
    }
};