class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res = []
        for i in nums1:
            if i not in nums2:
                pass
            else:
                res.append(i)
                nums2.remove(i)
        return res
       
                