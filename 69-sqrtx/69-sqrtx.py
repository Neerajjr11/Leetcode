class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0 or x == 1:
            return x
        loop = 1 
        op = 1
        while op<=x:
            
            loop += 1
            op = loop * loop
        return loop-1