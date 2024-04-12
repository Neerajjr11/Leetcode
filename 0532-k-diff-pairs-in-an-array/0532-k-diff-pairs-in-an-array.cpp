class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(auto i : nums)
            mp[i]++;
        for(auto i : mp){
            if(k == 0){
                // here if k is 0 we need to find 2 elements which are same, and doesn't matter if the elements freq is more than 2 as we need to find unique pairs
                if(i.second >= 2)
                    ans++;
            }
            else
                if(mp.find(i.first + k) != mp.end())
                    ans++;
        }
        return ans;
    }
};