class Solution:
    def canJump(self, nums: List[int]) -> bool:
        jump = nums[0]
        i = 1
        while jump < len(nums)-1:
            if jump < i:
                return False
            jump = max(jump,i+nums[i])
            i+=1
        return True
        