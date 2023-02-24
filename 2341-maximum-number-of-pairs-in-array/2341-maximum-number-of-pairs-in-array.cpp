class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> mp;
        for(auto i : nums)
            mp[i]++;
        int n = 0;
        int count = 0;
        for(auto i : mp){
            if(i.second > 1){
                count += i.second / 2;
                n += i.second % 2;
            }else{
                n++;
            }
        }
        res.push_back(count);
        res.push_back(n);
        return res;
    }
};