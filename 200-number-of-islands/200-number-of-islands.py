class Solution:
    
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid or not grid[0]:
            return 0
        visited = set()
        row = len(grid)
        col = len(grid[0])
        count = 0 
        for r in range(row):
            for c in range(col):
                if self.islands(r,c,grid,visited)!=0:
                    count+=1
        return count
        
    def islands(self,r,c,grid,visited):
        
        if (r not in range(len(grid)) or c not in range(len(grid[0])) or grid[r][c] == '0' or (r,c) in visited):
            return 0
        visited.add((r,c))

        return (1 + self.islands(r+1,c,grid,visited) + self.islands(r,c+1,grid,visited) + self.islands(r-1,c,grid,visited) + self.islands(r,c-1,grid,visited))
        
        