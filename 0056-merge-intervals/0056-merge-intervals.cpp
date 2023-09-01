class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mergedIntervals;
        mergedIntervals.push_back(intervals.front());
        for(auto& currentInterval : intervals){
            vector<int> lastInterval = mergedIntervals.back();  
            if(currentInterval[0] <= lastInterval[1]){
                lastInterval[1] = max(lastInterval[1], currentInterval[1]);
                mergedIntervals.pop_back();
                mergedIntervals.push_back(lastInterval);
            }
            else
                mergedIntervals.push_back(currentInterval);
        }
        return mergedIntervals;
    }
};