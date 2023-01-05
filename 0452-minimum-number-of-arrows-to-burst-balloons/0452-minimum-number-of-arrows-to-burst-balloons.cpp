bool cmp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        //points are not points but line segments, so I just modify points to segments
        //There are several segments on the one-dimensional coordinate axis, find out the minimum number of arrows which are orthogonal to the coordinate axis so that each segment can be shot through by at least one arrow.
        // Approach
        //Sort the segments by the end
        // put an arrow at the end of the 1-st segment
        // from the 2-nd segment, we check whether the current arrow pass through the current segment, if not add an arrow, put it at the end of the current segment
        sort(points.begin(), points.end(), cmp);
        int ans = 0, arrow = 0;
        for(int i = 0; i < points.size(); i++){
            if(ans == 0 || points[i][0] > arrow){
                ans++;
                arrow = points[i][1];
            }
        }
        return ans;
    }
};