class Solution:
    def countQuadruplets(self, nums: List[int]) -> int:
        n = len(nums)
        count = 0
        for i in range(0,n-3):
            for j in range(i+1 , n-2):
                for k in range(j+1,n-1):
                    for d in range(k+1,n):
                        if nums[i]+nums[j]+nums[k] == nums[d]:
                            count+=1
        return count
        