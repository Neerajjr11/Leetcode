class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort(reverse = True)
        sumi = 0
        for i in range(len(nums)-2):
            if nums[i] < nums[i+1]+nums[i+2]:
                return nums[i]+nums[i+1]+nums[i+2]
        if sumi ==0:
            return 0
        else:
            return sumi