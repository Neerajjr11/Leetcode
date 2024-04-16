class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), n2 = t.size();
        int i = 0, j = 0;
        while(j < n2 && i < n){
            if(s[i] == t[j]){
                i++;
                j++;
            }else
                j++;
        }
        return(i == n);
    }
};