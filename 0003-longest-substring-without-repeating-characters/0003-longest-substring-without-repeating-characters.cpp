class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        int n = s.size();
        unordered_map<int, int>mp;
        int res = 0;
        while(j < n){
            mp[s[j]]++;
            if((j - i + 1) < mp.size())
                j++;
            else if(mp.size() == (j - i  + 1)){
                res = max(res, (j - i + 1));
                j++;
            }
            else{
                while((j - i + 1) > mp.size()){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0)
                        mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return res;
    }
};