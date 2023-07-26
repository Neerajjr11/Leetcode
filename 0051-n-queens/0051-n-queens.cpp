class Solution {
public:
    bool isPlaceable(int row, int col, vector<string> board, int n) {


        // To check if any columns match/same
        int helpcol = col ;
        while (helpcol >= 0) {
            if (board[row][helpcol] == 'Q')
                return false;
            helpcol--;
        }
        
        // To check if diagonal up left attack is possible
        int r = row ;
        int c = col;
        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q')
                return false;
            r--;
            c--;
        }
        // Tp check if diagonal down left is possible
        r = row;
        c = col ;
        while (r < n && c >=0) {
            if (board[r][c] == 'Q')
                return false;
            r++;
            c--;
        }

        return true;
    }

    void solve(int col, int n, vector<string>& board, vector<vector<string>>& res) {
        if (col == n) {
            res.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (isPlaceable(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(col + 1, n, board, res);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n, string(n, '.')); // Initialize the board with '.' for all cells
        solve(0, n, board, res);
        return res;
    }
};
