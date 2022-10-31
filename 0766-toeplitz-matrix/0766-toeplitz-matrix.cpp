class Solution {
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
		int row = matrix.size();
		int col = matrix[0].size();
//      for the rows > 0 and cols > 0 we just check if each element is equal to the element to the left         and up
		for (int r = 1; r < row; r++) {
			for (int c = 1; c < col; c++) {
				if (matrix[r][c] != matrix[r - 1][c - 1])
					return false;
			}
		}
		return true;
	}
};