class Solution {
public:
    int minDeletions(string s) {
        unordered_set<int>st;
        unordered_map<char, int>mp;
        int res = 0;
        for(auto&x : s)
            mp[x]++;
        for(auto& i : mp){
            while(st.count(i.second)){
                i.second--;
                res++;
            }
            // This is an edge case as when the count of frequency of characters is 0, we don't need to add it as it doesn't appears in the string at all
            if(i.second != 0)
                st.insert(i.second);
        }
        return res;
    }
};