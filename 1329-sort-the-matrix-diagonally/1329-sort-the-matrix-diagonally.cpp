class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int colsize = mat[0].size();
        int rowsize = mat.size();
        for(int i = 0; i < colsize; i++){
            int r = 0, c = i;
            // we first traverse the matrix through columns diagonally
            vector<int> sorter;
            while(r < rowsize and c < colsize){
                sorter.push_back(mat[r][c]);
                r++;
                c++;
            }
            sort(sorter.begin(), sorter.end());
            r = 0,  c = i;
            int temp = 0;
            while(r < rowsize and c < colsize){
                mat[r][c] = sorter[temp];
                r++;
                c++;
                temp++;
            }
        }
        for(int i = 0; i < rowsize; i++){
            int r = i, c = 0;
            // we  traverse the matrix through rows diagonally
            vector<int> sorter;
            while(r < rowsize and c < colsize){
                sorter.push_back(mat[r][c]);
                r++;
                c++;
            }
            sort(sorter.begin(), sorter.end());
            r = i,  c = 0;
            int temp = 0;
            while(r < rowsize and c < colsize){
                mat[r][c] = sorter[temp];
                r++;
                c++;
                temp++;
            }
        }
        return mat;
    }
};