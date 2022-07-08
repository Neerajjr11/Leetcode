class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        op = ''
        for i in digits:
            op += str(i)
        op = int(op)
        op = op + 1
        return list(str(op))