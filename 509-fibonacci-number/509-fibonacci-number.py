class Solution:
    def fib(self, n: int) -> int:
        if n < 2:
            return n
        return self.fib(n-2) + self.fib(n-1)