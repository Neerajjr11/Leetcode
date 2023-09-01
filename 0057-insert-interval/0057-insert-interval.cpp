class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mergedInterval;
        mergedInterval.push_back(intervals.front());
        for(auto& currentInterval : intervals){
            vector<int> lastInterval = mergedInterval.back();
            if(currentInterval[0] <= lastInterval[1]){
                lastInterval[1] = max(currentInterval[1], lastInterval[1]);
                mergedInterval.pop_back();
                mergedInterval.push_back(lastInterval);
            }else
                mergedInterval.push_back(currentInterval);
        }
        return mergedInterval;
    }
};