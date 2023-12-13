class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int, int>rowCount;
        unordered_map<int, int>colCount;
        int count = 0;
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                rowCount[i] += mat[i][j];
                colCount[j] += mat[i][j];
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                // cout <<rowCount[i] << " " << colCount[j] << " ";
                if(rowCount[i] == 1 and colCount[j] == 1 and mat[i][j] == 1)
                    count++;
            }
        }
        return count;
    }
};