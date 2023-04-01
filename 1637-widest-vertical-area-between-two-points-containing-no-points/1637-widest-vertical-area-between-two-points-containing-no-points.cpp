class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
       sort(points.begin(), points.end(), [](auto &a, auto &b) {
            return a[0] < b[0];
        });
        int res = 0;
        for(int i = 0; i < points.size() - 1; i++){
            res = max(res, points[i + 1][0] - points[i][0]);
        }
        return res;
    }
};