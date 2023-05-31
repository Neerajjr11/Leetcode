class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto&x : nums)
            mp[x]++;
        vector<int>res;
        for(auto& i : mp)
            if(i.second == 1)
                res.push_back(i.first);
        return res;
    }
};