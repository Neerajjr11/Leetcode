class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0 or x == 1:
            return x
        left = 0
        right = x
        while left <= right:
            mid = left + (right-left) // 2
            square = mid * mid
            if square == x:
                return mid
            if square < x:
                left =mid + 1
            else:
                right = mid -1
        return left -1