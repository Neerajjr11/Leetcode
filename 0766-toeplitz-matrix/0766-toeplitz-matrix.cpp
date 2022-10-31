class Solution {
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
		int row = matrix.size();
		int col = matrix[0].size();
		for (int r = 1; r < row; r++) {
			for (int c = 1; c < col; c++) {
				if (matrix[r][c] != matrix[r - 1][c - 1])
					return false;
			}
		}
		return true;
	}
};