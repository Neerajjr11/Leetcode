class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0;
        int n = mat.size();
        for(int r = 0; r < n; r++){
                res += mat[r][r];
                res += mat[n - 1 - r][r];
        }
        if(mat.size() %2 != 0){
            int r = floor(mat.size() / 2);
            res -= mat[r][r];
        }
        return res;
    }
};