class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int res = 0;
        int minip = INT_MAX;
        int mini = INT_MAX;
        for(int i = 0; i < points.size(); i++){
            if(points[i][0] == x or points[i][1] == y){
                mini = min(abs(points[i][0] - x) + abs(points[i][1] - y), mini);
                if(mini < minip){
                    res = i;
                    minip = mini;
                    mini = INT_MAX;
                }
            }
        }
        return (minip == INT_MAX ? -1 : res);
    }
};