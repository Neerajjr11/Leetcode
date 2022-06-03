class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        flag = 0 
        for j in range(len(nums)):
            if val == nums[j]:
                nums[j] = -1
                flag = 1
        if flag == 1:
            nums.sort(reverse=True)
            k=nums.index(-1)
            return k
        else:
            return(len(nums))