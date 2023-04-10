class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto& x: nums)
            mp[x]++;
        vector<vector<int>>res;
        while(mp.size()){
            vector<int> helper;
            vector<int> keysToRemove;
            for(auto& i : mp){
                helper.push_back(i.first);
                i.second--;
                if(i.second == 0)
                    keysToRemove.push_back(i.first);
            }
            for(auto& key : keysToRemove) {
                mp.erase(key);
            }
            res.push_back(helper);
        }
        return res;
    }
};
