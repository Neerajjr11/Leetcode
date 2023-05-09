class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // right->down->left->up
        // for a 5 X 3 matrix the shift in horizontal movement is {5, 4, 3}
        // the shift in the vertical movement is {2, 1, 0}
        // let the cursor start at {0, -1}
        vector<vector<int>> dir = {{0, 1}, {1, 0},{0, - 1}, {-1, 0}};
        vector<int> res;
        if(m == 0)
            return res;
        vector<int> Steps{n, m - 1};
        int dir_idx = 0;
        int row_pos = 0, col_pos = -1;
        while(Steps[dir_idx % 2]){   
            for(int i = 0; i < Steps[dir_idx % 2]; i++){
                row_pos += dir[dir_idx][0];
                col_pos += dir[dir_idx][1];
                res.push_back(matrix[row_pos][col_pos]);
            }
            Steps[dir_idx % 2]--;
            dir_idx = (dir_idx + 1) % 4;
        }
        return res;
    }
};