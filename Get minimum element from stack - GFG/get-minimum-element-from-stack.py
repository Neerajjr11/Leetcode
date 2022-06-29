#User function Template for python3

class stack:
    def __init__(self):
        self.s=[]
        self.minEle=None

    def push(self,x):
        #CODE HERE
        if self.s == []:
            self.s.append(x)
            self.minEle = x
        else:
            if x >= self.minEle:
                self.s.append(x)
            else:
                self.s.append(2*x-self.minEle)
                self.minEle = x
    def pop(self):
        #CODE HERE
        if self.s !=[]:
            y = self.s[len(self.s)-1] #top element
            if y >= self.minEle:
                return self.s.pop()
            else:
                ans = self.minEle
                self.minEle = 2*(self.minEle) - y
                self.s.pop()
                return ans
        else:
            return -1

    def getMin(self):
        #CODE HERE
        if self.s !=[]:
            return self.minEle
        else:
            return -1
#{ 
#  Driver Code Starts
#contributed by RavinderSinghPB
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        q = int(input())

        arr = [int(x) for x in input().split()]

        stk=stack()  

        qi = 0
        qn=1
        while qn <= q:
            qt = arr[qi]

            if qt == 1:
                stk.push(arr[qi+1])
                qi+=2
            elif qt==2:
                print(stk.pop(),end=' ')
                qi+=1
            else:
                print(stk.getMin(),end=' ')
                qi+=1
            qn+=1
        print()

# } Driver Code Ends