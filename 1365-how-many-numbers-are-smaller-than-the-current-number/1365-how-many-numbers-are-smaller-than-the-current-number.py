class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        temp = nums[:]
        temp.sort()
        return [temp.index(n) for n in nums]
        