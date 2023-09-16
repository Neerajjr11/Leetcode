class Solution {
public:
    int minDeletions(string s) {
        unordered_set<int>st;
        unordered_map<char, int>mp;
        int res = 0;
        for(auto&x : s)
            mp[x]++;
        // for(auto& i : mp)
        //     cout<<i.first<<" "<<i.second<<" ";
        for(auto& i : mp){
            while(st.count(i.second)){
                i.second--;
                res++;
            }
            if(i.second != 0)
                st.insert(i.second);
        }
        return res;
    }
};