class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> res;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                res.push_back(matrix[i][j]);
            }
        }
        sort(begin(res), end(res));
        return res[k - 1];
    }
};