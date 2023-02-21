class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> res;
        unordered_map<int, int> mp;
        for(auto x : matches)
            mp[x[1]]++;
        for(auto x : matches){
            if(mp.find(x[0]) == mp.end())
                mp[x[0]] = 0;
        }
        vector<int> helper;
        for(auto i : mp)
            if(i.second == 0)
                helper.push_back(i.first);
        sort(helper.begin(), helper.end());
        res.push_back(helper);
        helper.clear();
        for(auto i : mp)
            if(i.second == 1)
                helper.push_back(i.first);
        sort(helper.begin(), helper.end());
        res.push_back(helper);
        return res;
    }
};