class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i : nums)
            mp[i]++;
        vector<int> res;
        int n = floor(nums.size() / 3);
        for(auto i : mp){
            if(i.second > n)
                res.push_back(i.first);
        }
        return res;
    }
};