class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        if n <=2:
            return 0
        left = [0]*n
        right = [0]*n
        left[0] = 0
        leftMax = height[0]
        for i in range(n):
            left[i] = leftMax
            leftMax = max(leftMax,height[i])
        right[n-1] = 0
        rightMax = height[n-1]
        for i in range(n-2,-1,-1):
            right[i] = rightMax
            rightMax = max(rightMax,height[i])
        
        trappedWater = 0
        for i in range(n):
            if height[i] < left[i] and height[i] < right[i]:
                trappedWater +=min(left[i],right[i]) - height[i]
        return trappedWater
                