class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> mp;
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(mp.find(s[i]) == mp.end())
                mp[s[i]]++;
            else{
                res++;
                mp.clear();
                if(i == s.size() - 1)
                    res++;
                else
                    mp[s[i]]++;
            }
        }
        if(mp.size() > 0)
            res++;
        return res;
    }
};