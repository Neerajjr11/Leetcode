class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        vector<int> prev(n , 0), curr(n, 0);
        for(int j = 0; j < n; j++) prev[j] = matrix[0][j];
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                int up = matrix[i][j] + prev[j];
                int left_diagonal = matrix[i][j];
                if(j - 1  >= 0) left_diagonal += prev[j - 1];
                else left_diagonal += 1e8;
                int right_diagonal = matrix[i][j];
                if(j + 1 < n) right_diagonal += prev[j + 1];
                else right_diagonal += 1e8;
                curr[j] = min(up, min(left_diagonal, right_diagonal));
            }
            prev = curr;
        }
        int mini = 1e8;
        for(int j = 0; j < n; j++){
            mini = min(mini, prev[j]);
        }
        return mini;
    }
};