class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(auto& x : nums)
            mp[x]++;
        // using bucket sorting
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);
        for(auto& i : mp)
            bucket[i.second].push_back(i.first);
        for(int i = n; i >= 0; i--){
            if(res.size() >= k)
                break;
            if(!bucket[i].empty()){
                res.insert(res.end(), bucket[i].begin(), bucket[i].end());
            }
        }
        return res;
    }
};