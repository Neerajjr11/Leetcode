class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        // we will be solving this using min heap
        // for tht we will need to make a priority_queue which stores a pair tht is the processing time and the index
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        int n = tasks.size();
        long time = 0;
        int i;
        // we add the index to the vector as well we do this to keep track of which task index will be the output
        for(i = 0; i < n; i++){
            tasks[i].push_back(i);
        }
        // we sort based on ascending order to get the enqueue time in sorted order
        sort(tasks.begin(), tasks.end());
        vector<int> ans;
        i = 0;
        while(i < n || pq.size()){
            // we check if pq is empty
            if(pq.empty())
                time = max(time, (long)tasks[i][0]);
            // we push the processing time and the index into the pq
            while(i < n && time >= tasks[i][0]){
                pq.push({tasks[i][1], tasks[i][2]});
                ++i;
            }
            pair<long, long> s = pq.top();
            pq.pop();
            time += s.first;
            ans.push_back(s.second);
        }
        return ans;
    }
};