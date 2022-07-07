class Solution:
    def isPalindrome(self, s: str) -> bool:
        res = re.sub(r'[^a-zA-Z0-9]', '', s.lower())
        op = res[::-1]
        if op == res:
            return True
        else:
            return False