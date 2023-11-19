class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto& i: nums)
            mp[i]++;
        // taking min heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
        vector<int> res;
        for(auto& i : mp){
            pq.push({i.second, i.first});
            if(pq.size() > k)
                pq.pop();
        }
        while(pq.size() > 0){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};