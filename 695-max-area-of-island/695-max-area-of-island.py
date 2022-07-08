
class Solution:
    def maxAreaOfIsland(self, grid: List[List[str]]) -> int:
        if not grid or not grid[0]:
            return 0
        visited = set()
        row = len(grid)
        col = len(grid[0])
        area = 0 


        def islands(r,c):
            if (r not in range(row) or c not in range(col) or grid[r][c] == 0 or (r,c) in visited):
                return 0
            visited.add((r,c))

            return (1 + islands(r+1,c) + islands(r,c+1) + islands(r-1,c) + islands(r,c-1))
        for r in range(row):
            for c in range(col):
                    area = max(area,islands(r,c))
        return area