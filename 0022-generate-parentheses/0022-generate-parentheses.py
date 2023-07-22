class Solution:
    def solve(self,ans,o,c,n,s):
        if o+c>2*n:
            return
        
        if len(s) == n*2 and o==c:
            ans.append(s)
            print(s)
            return
        
        if c < o:
            self.solve(ans,o,c+1,n,s+")")
        self.solve(ans,o+1,c,n,s+"(")
        
        return
    
    def generateParenthesis(self, n: int) -> List[str]:
        ans = []
        self.solve(ans,0,0,n,"")
        return ans