class Solution:
    def fib(self, n: int) -> int:
        memo = []
        for index in range(n + 1):
            if index == 0:
                memo.append(0)
            elif index == 1 or index == 2:
                memo.append(1)
            else:
                memo.append(memo[index-1] + memo[index-2])
        
        return memo[n]