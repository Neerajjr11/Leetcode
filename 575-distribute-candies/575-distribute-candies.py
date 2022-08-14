class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        candyType_set = set(candyType)
        return min(len(candyType)//2,len(candyType_set))