#User function Template for python3

class Solution:
    def changeBits(self, N):
        # code here
        op = bin(N).replace("0b", "")
        res = ''
        op = str(op)
        op = list(op)
        for i in range(len(op)):
            if op[i] == '0':
                op[i] = '1'
            res=res+op[i]
        # res = int(res)
        dec = int(res,2)
        ans = [(dec-N),dec]
        return ans
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        ans = ob.changeBits(N)
        
        print(ans[0],ans[1])
# } Driver Code Ends