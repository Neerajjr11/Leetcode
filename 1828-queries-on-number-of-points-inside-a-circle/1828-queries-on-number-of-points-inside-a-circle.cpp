class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>res;
        int count = 0;
        for(int i = 0;i<size(queries);i++){
            int h = queries[i][0], k = queries[i][1], r = queries[i][2];
            for(int j = 0;j<size(points);j++){
                int x = points[j][0], y = points[j][1];
                if(((x-h)*(x-h)+ (y-k)*(y-k)) <= r* r)
                    count++;
            }
            res.push_back(count);
            count = 0;
        }
        return res;
    }
};