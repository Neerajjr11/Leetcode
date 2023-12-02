class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        for(auto& x : chars)
            mp[x]++;
        int res = 0;
        for(auto& s : words){
            bool does_contain = true;
            unordered_map<char,int>mp1;
            for(auto& x : s){
                mp1[x]++;
                if(mp1[x] > mp[x])
                    does_contain = false;
            }
            if(does_contain)
                res += s.size();
        }
        return res;
    }
};