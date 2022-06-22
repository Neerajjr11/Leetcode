class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        counter = 0
        j= 0
        for i in nums:
            if i != 0:
                counter+=1
        for i in range(n):
            if j < counter:
                if nums[i] !=0:
                    nums[j] = nums[i]
                    j+=1
        for i in range(j,n):
            nums[i] = 0