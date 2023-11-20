class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> pq1; 
        priority_queue<int,vector<int>,greater<int>> pq2; 
        long long cost = 0;
        int top1, top2;
        int l = 0, r = costs.size() - 1;
        while(k--){
            while(pq1.size()<candidates and l <=r)
                pq1.push(costs[l++]);
            while(pq2.size() < candidates and l <= r)
                pq2.push(costs[r--]);
            if(pq1.size() > 0)
                top1 = pq1.top();
            else
                top1 = INT_MAX;
            if(pq2.size() > 0)
                top2 = pq2.top();
            else
                top2 = INT_MAX;
            if(top1 <= top2){
                pq1.pop();
                cost += top1;
            }else{
                pq2.pop();
                cost += top2;
            }
        
        }
        return cost;
    }
};