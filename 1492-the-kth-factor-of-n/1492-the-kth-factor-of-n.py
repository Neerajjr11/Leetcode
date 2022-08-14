class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        lst =[]
        if n <= 0:
            return 0
        for i in range(1,n+1):
            if n%i==0:
                lst.append(i)
        if len(lst) <k:
            return -1
        else:
            return lst[k-1]