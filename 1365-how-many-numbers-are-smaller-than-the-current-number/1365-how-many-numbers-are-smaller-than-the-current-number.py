class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        lst = []
        count =0 
        for i in range(len(nums)):
            for j in range(len(nums)):
                if nums[i] > nums[j]:
                    count+=1
            lst.append(count)
            count = 0
        return lst