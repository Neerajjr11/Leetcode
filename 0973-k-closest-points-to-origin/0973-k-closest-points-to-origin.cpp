class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // using max heap since we need to get the closest or in this scenario k lowest distance 
        priority_queue<pair<int, pair<int,int>>> pq;
        for(auto& i : points){
            // for simple calc we can take (x ^ 2 + y ^2) instead of sqrt to maintain the int
            
            pq.push({(i[0]*i[0] + i[1] * i[1]), {i[0], i[1]}});
            if(pq.size() > k)
                pq.pop();
        }
        vector<vector<int>> res;
        for(int i = 0; i < k; i++){
            pair<int,int> p = pq.top().second;
            res.push_back({p.first, p.second});
            pq.pop();
        }
        return res;
    }
};