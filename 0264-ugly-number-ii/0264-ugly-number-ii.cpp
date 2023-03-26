class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        pq.push(1);
        n--;
        while(n){
            long long num = pq.top();
            while(not pq.empty() and pq.top() == num){
                pq.pop();
            }
            pq.push(2 * num);
            pq.push(3 * num);
            pq.push(5 * num);
            n--;
        }
        return pq.top();
    }
};