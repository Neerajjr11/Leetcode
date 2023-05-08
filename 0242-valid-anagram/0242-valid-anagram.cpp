class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(s), end(s));
        sort(begin(t), end(t));
        unordered_map<char, int>mp1, mp2;
        for(auto& x : s)
            mp1[x]++;
        for(auto& x : t)
            mp2[x]++;
        if(mp1 == mp2)
            return true;
        else
            return false;
    }
};