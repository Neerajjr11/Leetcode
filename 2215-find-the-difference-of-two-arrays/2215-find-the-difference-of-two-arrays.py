class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        a1 = []
        a2 = []
        lst = []
        for i in range(len(nums1)):
                if nums1[i] not in nums2:
                    a1.append(nums1[i])
        for i in range(len(nums2)):
            if nums2[i] not in nums1:
                    a2.append(nums2[i])
        a1 = list(set(a1))
        a2 = list(set(a2))
        lst.append(a1)
        lst.append(a2)
        return lst