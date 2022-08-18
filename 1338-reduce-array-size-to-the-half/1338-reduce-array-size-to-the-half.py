class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        freq = [0] * (len(arr)+1)
        
        for count in Counter(arr).values():
            freq[count] +=1
            
        
        mid = len(arr)//2
        ans = 0
        count = 0
        for i in range(len(arr),-1,-1):
            while freq[i]:
                ans +=1
                count+=i

                if count>=mid:
                    return ans
                freq[i]-=1
        return ans