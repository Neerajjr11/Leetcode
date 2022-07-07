class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        dic = Counter(nums)
        
        for i in dic:
            if dic[i] == 1:
                return i