#User function Template for python3

class Solution:
    def canReach(self, A, N):
        # code here
        jump = A[0]
        i = 1
        while jump < len(A)-1:
            if jump < i:
                return 0
            jump = max(jump,i+A[i])
            i+=1
        return 1

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        A=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.canReach(A,N))
# } Driver Code Ends