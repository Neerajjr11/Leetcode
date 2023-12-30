class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if(words.size() == 1)
            return true;
        unordered_map<char, int> mp;
        for(auto& x : words)
            for(auto& s : x)
                mp[s]++;
        for(auto& i : mp)
            if(i.second % words.size() != 0)
                return false;
        return true;
    }
};