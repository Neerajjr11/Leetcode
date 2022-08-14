class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        element1 = nums[0]
        count1 = 0
        element2 = 0
        count2 = 0
        lst = []
        for i in range(n):
            if element1 == nums[i]:
                count1+=1
            elif element2 == nums[i]:
                count2 +=1
            elif count1 == 0:
                element1 = nums[i]
                count1 = 1
            elif count2 == 0:
                element2 = nums[i]
                count2 = 1
            else:
                count1 -=1
                count2 -=1
        count1 = count2 =0
        for i in range(n):
            if nums[i] == element1:
                count1 +=1
            elif nums[i] == element2:
                count2 +=1
        if count1 > n//3:
            lst.append(element1)
        if count2 > n//3:
            lst.append(element2)
        return lst
            