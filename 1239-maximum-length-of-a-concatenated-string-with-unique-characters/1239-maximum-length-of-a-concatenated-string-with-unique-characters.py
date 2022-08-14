class Solution:
    def maxLength(self, arr: List[str]) -> int:
        s = ""
        def helper(arr,i,s):
            if i == len(arr):
                freq = [0] * 26
                for k in range(len(s)):
                    if freq[abs(ord(s[k]) - 97)] == 1:
                        return 0
                    freq[abs(ord(s[k]) - 97)] +=1
                return len(s)
            op1 = op2 = 0
            if len(s) + len(arr[i]) <=26:
                op1 = helper(arr,i+1,s+arr[i])
            op2 = helper(arr,i+1,s)
            return max(op1,op2)
        return helper(arr,0,s)