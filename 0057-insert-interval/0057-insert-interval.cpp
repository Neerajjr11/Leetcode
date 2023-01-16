class Solution {
public:
    bool mycomp(vector<int>& a, vector<int>& b) {
    return a[0] < b[0];
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back({newInterval});
        sort(intervals.begin(), intervals.end(),[&](vector<int> a, vector<int> b){
             return (mycomp(a,b));});
        // return intervals;
        int res = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[res][1] >= intervals[i][0]){
                intervals[res][1] = max(intervals[res][1], intervals[i][1]);
                intervals[res][0] = min(intervals[res][0], intervals[i][0]);
            }
            else{
                res++;
                intervals[res] = intervals[i];
            }
        }
        vector<vector<int>>ans;
        for(int i = 0; i <= res;i++){
            ans.push_back(intervals[i]);
        }
        return ans;
        
    }
};