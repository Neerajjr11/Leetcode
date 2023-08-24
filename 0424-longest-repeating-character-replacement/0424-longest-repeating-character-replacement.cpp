class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0, j = 0;
        int n = s.size();
        int ans = 0;
        for(char ch = 'A'; ch <= 'Z'; ch++){
            int replacement = k;
            
            for(int i = 0, l = 0; i < n; i++){
                if(s[i] != ch)
                    replacement--;
                while(replacement < 0){
                    if(s[l] != ch)
                        replacement++;
                    l++;
                }
                ans = max(ans, (i - l + 1));
                
            }
        }
        return ans;
    }
};