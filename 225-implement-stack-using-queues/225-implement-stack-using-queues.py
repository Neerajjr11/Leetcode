
class MyStack:
    def __init__(self):
        self.inq = []
        self.outq = []
        self.topi = -1

    def push(self, x: int) -> None:
        self.inq.append(x)
        self.topi = x

    def pop(self) -> int:
        self.flag = 1
        while len(self.inq) != 1:
            val = self.inq.pop(0)
            self.outq.append(val)
            self.topi = val
        res = self.inq.pop(0)
        self.inq,self.outq = self.outq,self.inq
        return res

    def top(self) -> int:
        return self.topi
    def empty(self) -> bool:
        return self.outq == [] and self.inq == []


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()