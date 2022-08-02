class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        lst=[]
        sumo =0
        nums.sort()
        for i in range(0,len(nums),2):
            sumo+= min(nums[i],nums[i+1])
        return sumo
                