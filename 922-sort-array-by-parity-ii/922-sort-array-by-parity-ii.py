class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        lst = [None]*len(nums)
        count = 0
        for i in range(len(nums)):
            if nums[i] %2 ==0:
                lst[count] = nums[i]
                count +=2
        count = 1
        for i in range(len(nums)):
            if nums[i] %2 !=0:
                lst[count] = nums[i]
                count +=2
        return lst