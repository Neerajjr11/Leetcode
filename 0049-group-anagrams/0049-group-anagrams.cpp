class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        for(int i = 0; i < strs.size(); i++){
            string s2 = strs[i];
            sort(begin(strs[i]), end(strs[i]));
            mp[strs[i]].push_back(s2);
        }
        vector<vector<string>>res;
        for(auto& i : mp)
            res.push_back(i.second);
        return res;
    }
};