class Solution:
    def calPoints(self, ops: List[str]) -> int:
        res = []
        for i in ops:
            if i !="D" and i!="C" and i!="+":
                res.append(int(i))
            elif i == "C":
                res.pop()
            elif i == "D":
                res.append(res[-1] *2)
            elif i =="+":
                res.append(res[-1]+res[-2])
        return sum(res)