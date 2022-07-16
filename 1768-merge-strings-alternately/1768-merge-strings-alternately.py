class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res = ''
        m = len(word1)
        n = len(word2)
        index = 0
        if m >n:
            for i in range(n):
                res += word1[i]
                res +=word2[i]
                index+=1
            for i in range(index,m):
                
                res +=str(word1[i])
        else:
            for i in range(m):
                res += word1[i]
                res +=word2[i]
                index+=1
            for i in range(index,n):
                
                res +=str(word2[i])
        # if(m>n):
        #     for i in word2:
        #         if i not in res:
        #             res +=str(i)
        # else:
        #     for i in word2:
        #         if i not in res:
        #             res +=str(i)
        return res