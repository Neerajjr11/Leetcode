class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        flag = len(set(nums)) == len(nums)
        if not flag:
            return True
        else:
            return False
            