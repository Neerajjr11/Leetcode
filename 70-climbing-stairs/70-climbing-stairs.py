class Solution:
    def climbStairs(self, n: int) -> int:
        result = 0
        adder = 1
        for i in range(n+1):
            result = result + adder
            adder = result - adder
        return result
        