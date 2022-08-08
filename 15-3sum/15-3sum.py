class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = set()
        for left in range(len(nums)-2):
            mid = left +1
            right = len(nums) -1
            while (mid < right):
                s = nums[left] + nums[mid] + nums[right]
                if s < 0:
                    mid += 1
                elif s > 0:
                    right -=1
                else:
                    res.add((nums[left], nums[mid], nums[right]))
                    mid += 1
                    right -= 1
                    
        return res