class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        k=len(set(nums))
        nums[:] = sorted(set(nums))
        return k