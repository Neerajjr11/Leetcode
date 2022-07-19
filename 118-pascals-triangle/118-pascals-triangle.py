class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        pascals = [[1 for _ in range(row + 1)]for row in range(numRows)]
        
        for row in range(numRows):
            for col in range(1,row):
                pascals[row][col] = pascals[row-1][col] + pascals[row-1][col-1]
        return pascals
            