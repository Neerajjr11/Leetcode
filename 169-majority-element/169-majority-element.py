class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        d = Counter(nums)
        for i in d:
            if d[i] > (len(nums)/2):
                return i