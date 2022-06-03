class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        flag = 0 
        for j in range(len(nums)):
            if target == nums[j]:
                flag = 1
                return j
        for i in range(len(nums)):
                if target < nums[i]:
                    flag = 2
                    return i
                
        if flag == 0:
            return(len(nums))
            