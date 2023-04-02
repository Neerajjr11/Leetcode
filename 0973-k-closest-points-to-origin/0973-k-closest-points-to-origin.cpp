class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<double, vector<int>>> res;
        for(int i = 0; i < points.size(); i++){
            double rt = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            res.push_back(make_pair(rt,points[i]));
        }
        sort(begin(res), end(res));
        vector<vector<int>> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }
};