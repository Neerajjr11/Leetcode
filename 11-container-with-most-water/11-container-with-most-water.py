class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxArea = 0
        left, right = 0, len(height) - 1
        
        while left < right:
            current_area = min(height[right], height[left]) * (right - left)
            maxArea = max(maxArea, current_area)
            if height[left] > height[right]:
                right -= 1
            else:
                left += 1
            
        return maxArea