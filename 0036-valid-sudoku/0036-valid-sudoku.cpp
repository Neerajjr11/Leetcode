class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int>row[9],col[9],box[9];
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    row[i][board[i][j]]++;
                    col[j][board[i][j]]++;
                    int k = (i/3)*3 + j/3;
                    box[k][board[i][j]]++;
                    if(row[i][board[i][j]] > 1 || col[j][board[i][j]] > 1 || box[k][board[i][j]] > 1)
                        return false;
                }
            }
        }
        return true;
    }
};