class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x]++;
        int maxi = -1;
        for(auto i : mp){
            if(mp.find(-i.first) != mp.end())
                maxi = max(maxi, abs(i.first));
        }
        return maxi;
    }
};