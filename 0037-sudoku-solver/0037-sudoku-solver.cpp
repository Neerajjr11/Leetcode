class Solution {
public:
    bool isPossible(vector<vector<char>>&board, int row, int col, char c){
        for(int i = 0; i < 9; i++){
        // check if the digit is present in the row
            if(board[row][i] == c)
                return false;
            // check if the digit is present in the column
            if(board[i][col] == c)
                return false;
            // check if the digit is present in the 3x3 box
            // row / 3 tells which horizontal it belongs as in the board horizontally and vertically it divided into 3x3 matrix
            // then multiply by 3 i.e 3*(row/ 3) to get the corresponding row of the horizontal
            // in row we then do i / 3 because we increment to next row after searching 3 columns
            // whereas in col we do i % 3 as we need to increment the column by 0, 1 or 2 to traverse the whole 3x3 matrix
            if(board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == c)
                return false;
        }        
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        function<bool(vector<vector<char>>&)>solve = [&](vector<vector<char>>& board){
            for(int i = 0; i < board.size(); i++){
                for(int j = 0; j < board[0].size(); j++){
                    if(board[i][j] == '.'){
                        for(char c = '1'; c <= '9'; c++){
                            if(isPossible(board, i, j, c)){
                                board[i][j] = c;
                                if(solve(board) == true)
                                    return true;
                                else
                                    board[i][j] = '.';
                            }
                        }
                        return false;
                    }
                }
            }
            return true;
        };
        solve(board);
    }
};