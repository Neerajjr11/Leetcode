class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        d = Counter(nums)
        for item in d:
            if d[item] > 1:
                return item
            
        
        
        