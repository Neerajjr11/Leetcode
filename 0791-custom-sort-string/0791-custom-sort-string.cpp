class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> mp1(26,0);
        for(auto& x : s)
            mp1[x - 'a']++;
        string res = "";
        for(auto& x : order){
            if(mp1[x - 'a'] >= 1){
                while(mp1[x- 'a']--)
                    res += x;
            }
        }
        for(auto & x : s)
            if(mp1[x - 'a'] >= 1)
                while(mp1[x - 'a']--)
                    res+=x;
        return res;
    }
};