class Solution:
    def circularArrayLoop(self, nums: List[int]) -> bool:
        def helper(nums, i):
            return (i + nums[i] + len(nums)) % len(nums)
        n = len(nums)
        for i in range(n):
            slow = i 
            fast = i
            if nums[i] == 0:
                continue
            while (nums[slow]*nums[helper(nums,slow)]) > 0 and (nums[fast] * nums[helper(nums,fast)]) > 0 and (nums[fast] * nums[helper(nums,helper(nums,fast))]) > 0:
                slow = helper(nums,slow)
                fast = helper(nums,helper(nums,fast))
                if slow == fast:
                    if slow == helper(nums,slow):
                        break
                    return True
            slow = i
            val = nums[slow]
            while (val * nums[slow]) > 0:
                x = slow
                slow = helper(nums,slow)
                nums[x] = 0
        return False
                
                    
            
                    