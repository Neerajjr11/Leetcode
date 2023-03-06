class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<int, int> mp;
        int i = 0, j = 0, n = s.size();
        int res = 0;
        while(j < n){
            mp[s[j]]++;
            if((j - i + 1) < 3)
                j++;
            else if((j - i + 1) == 3){
                if(mp.size() == 3)
                    res++;
                mp[s[i]]--;
                if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
                j++;
            }
        }
        return res;
    }
};