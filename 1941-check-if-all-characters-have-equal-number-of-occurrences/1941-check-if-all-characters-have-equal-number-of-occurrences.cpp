class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for(char c : s)
            mp[c]++;
        int store = mp[s[0]];
        for(auto i : mp)
            if(i.second != store)
                return false;
        return true;
    }
};