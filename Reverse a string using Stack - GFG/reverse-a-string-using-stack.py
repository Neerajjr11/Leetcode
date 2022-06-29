#{ 
#Driver Code Starts

 # } Driver Code Ends
def reverse(S):
    arr = []
    for i in S:
        arr.insert(0,i)
    S = ''.join(arr)
    return S
    #Add code here

#{ 
#Driver Code Starts.
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        str1=input()
        print(reverse(str1))
#} Driver Code Ends