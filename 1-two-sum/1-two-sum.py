class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map={}
        for i in range(len(nums)):
            compliment = target - nums[i]
            if compliment in map:
                return [map[compliment],i]
            map[nums[i]] = i
        return []