class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        // make straight line on every 2 points and then find
        // how many of the points lie on it 
        int n  = points.size();
        if(n <= 2)
            return n;
        double slope;
        int res = 2;
        for(int i = 0; i < n; i++){
            unordered_map<double, int> map;
            for(int j = i + 1; j < n; j++){
                int x2 = points[i][0], y2 = points[i][1];
                int x1 = points[j][0], y1 = points[j][1];
                // If Slope is Infinte We let Slope as INT_MAX
                if(x2 == x1){
                    slope = INT_MAX;
                    map[slope]++;
                }
                 // Else we calculate slope and  increase its count
                else{
                    slope = (1.0)* (y2 - y1)/(x2 - x1);
                    map[slope]++;
                }
                // we store the max frequency for that slope and sdd 1 is because we need to count ith coordinate also
                res = max(res, map[slope] + 1);
            }
        }
        return res;
    }
};