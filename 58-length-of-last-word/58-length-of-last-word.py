class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        lst = list(s.split())
        st = str(lst[-1])
        return len(st)