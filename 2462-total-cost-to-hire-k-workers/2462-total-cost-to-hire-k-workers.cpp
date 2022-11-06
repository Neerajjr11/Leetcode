class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long n = costs.size();
        long long oflow = n - candidates;
        priority_queue<int, vector<int>, greater<int> > p1;
        int i=0;
        while(i<candidates){
            p1.push(costs[i]);
            i++;
        }
        if(candidates >  oflow){
            candidates = oflow;
        }
        priority_queue<int, vector<int>, greater<int> > p2;
        long long c = 0;
        long long j = n-1;
        while(c<candidates){
            p2.push(costs[j]);
            c++;
            j--;
        }
        long long ans = 0;
        while(k--){  
            if(p1.size() == 0){
                ans += p2.top();
                p2.pop();
                if(i <= j){
                   p2.push(costs[j]);
                    j--;
                } 
            }
            else if(p2.size() == 0 || p1.top() <= p2.top()){
                ans += p1.top();
                p1.pop();
                if(i <= j){
                    p1.push(costs[i]);
                    i++;
                } 
            }
            else{
                ans += p2.top();
                p2.pop();
                if(i <= j){
                 p2.push(costs[j]);
                    j--;
                } 
            }
        }
        return ans;
    }
};