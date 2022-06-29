#{ 
#Driver Code Starts

 # } Driver Code Ends
def reverse(S):
    arr = []
    for i in S:
        arr.append(i)
    s = '' 
    while arr != []:
        s = s+arr.pop()
    return s
    #Add code here

#{ 
#Driver Code Starts.
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        str1=input()
        print(reverse(str1))
#} Driver Code Ends