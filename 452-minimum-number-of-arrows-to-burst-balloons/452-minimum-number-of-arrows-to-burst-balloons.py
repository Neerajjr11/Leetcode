class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key = lambda x:x[1])
        i = 0
        count = 1
        for j in range(len(points)):
            x2 = points[i][1]
            if points[j][0] <= x2 and x2 <=points[j][1]:
                continue
            else:
                i = j
                count +=1
        return count
        