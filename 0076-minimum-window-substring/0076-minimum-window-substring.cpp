class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0, j = 0, n = s.size(), k = t.size();
        string window;
        int start = 0;
        unordered_map<char, int> mp;
        for(char c : t)
            mp[c]++;
        int res = INT_MAX;
        while(j < n){
            if(mp[s[j]] >= 1)
                k--;
            mp[s[j]]--;
            j++;
            while (k == 0){
                if(res > (j - i)){
                    // cout<<i << j <<" ";
                    res = (j - i);
                    start = i;
                }
                mp[s[i]]++;
                if(mp[s[i]] >= 1)
                    k++;
                i++;
            }
        }
        if(res == INT_MAX)
            return "";
        window = s.substr(start, res);
        return window;
    }
};