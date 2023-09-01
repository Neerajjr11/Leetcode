class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals.front());
        for(auto& currentInterval : intervals){
            vector<int> lastInterval = res.back();  
            if(currentInterval[0] <= lastInterval[1]){
                lastInterval[1] = max(lastInterval[1], currentInterval[1]);
                res.pop_back();
                res.push_back(lastInterval);
            }
            else
                res.push_back(currentInterval);
        }
        return res;
    }
};