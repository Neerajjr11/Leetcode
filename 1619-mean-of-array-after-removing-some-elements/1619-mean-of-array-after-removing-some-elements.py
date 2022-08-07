class Solution:
    def trimMean(self, arr: List[int]) -> float:
        arr.sort()
        n = len(arr)
        sumi = 0
        percent = (n * 5)/100
        for i in range(len(arr)):
            if i >=percent and i < (n-percent):
                sumi +=arr[i]
        return sumi/(n-2*percent)