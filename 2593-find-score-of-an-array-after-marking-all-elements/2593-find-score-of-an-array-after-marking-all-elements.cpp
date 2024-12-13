class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        for(int i = 0; i < nums.size(); i++)
                pq.push({nums[i], i});
        long long sumi = 0;
        unordered_map<long long, long long> mp;
        while(pq.size() > 0){
            long long i = pq.top().first;
            long long j = pq.top().second;
            pq.pop();
            // cout << i << " ";
            if(mp.find(j) != mp.end())
                continue;
            else
            {
                // cout << i<<" ";
                // cout << j << " " << j - 1 << " " << j + 1 << " ";
                mp[j]++;
                if((j - 1) >= 0)
                    mp[j - 1]++;
                if((j + 1) < nums.size())
                    mp[j+1]++;
                sumi+=i;
            }
        }
        return sumi;
        
    }
};