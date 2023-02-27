class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> mp;
        int res = 0, start = 0;
        for(int i = 0; i < s.size(); i++){
            if(mp.find(s[i]) == mp.end())
                mp[s[i]] = i;
            else if(mp[s[i]] < start)
                mp[s[i]] = i;
            else{
                res++;
                start = i;
                mp[s[i]] = i;
            }
        }
        if(mp.size() > 0)
            res++;
        return res;
    }
};