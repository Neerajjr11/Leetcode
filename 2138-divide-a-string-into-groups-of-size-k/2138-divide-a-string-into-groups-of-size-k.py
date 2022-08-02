class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        lst=[]
        for i in range(0,len(s),k):
            lst.append(s[i:i+k])
        res = lst[-1]
        while len(res) !=k:
            res+=str(fill)
        lst[-1] = res
        return lst
            
            
            