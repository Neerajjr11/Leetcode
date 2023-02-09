class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int res = 0;
        int n = intervals.size();
        for(int i = 1; i < n; i++){
            if(intervals[res][1] >= intervals[i][0]){
                intervals[res][1] = max(intervals[res][1], intervals[i][1]);
                intervals[res][0] = min(intervals[res][0], intervals[i][0]);
            }else{
                res++;
                intervals[res] = intervals[i];
            }
        }
        intervals.erase(intervals.begin() + res + 1, intervals.end());
        return intervals;
    }
};