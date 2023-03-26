class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(auto &x : arr)
            mp[x]++;
        priority_queue<int, vector<int>, greater<>>pq;
        for(auto &i : mp){
            pq.push(i.second);
        }
        while(k){
            if(pq.top() > k)
                break;
            k -= pq.top();
            pq.pop();
        }
        return pq.size();
    }
};
