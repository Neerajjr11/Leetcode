class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        //up down left right uprd drdl upld dldl
        int dx[8] = {-1,1,0,0,-1, 1, -1, 1};
        int dy[8] = {0,0,-1,1, 1, 1, -1, -1};
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> res(m, vector<int>(n, 0));
        int count, sum, avg, x_new, y_new;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                count = 0;
                sum = 0;
                for(int dir = 0; dir < 8; dir++){
                    x_new = i + dx[dir];
                    y_new = j + dy[dir];
                    if(x_new >= 0 and x_new < m and y_new >= 0 and y_new < n){
                        sum += img[x_new][y_new];
                        count++;
                    }
                }
                sum += img[i][j];
                count++;
                avg = floor(sum / count);
                res[i][j] = avg;
            }
        }
        return res;
    }
};