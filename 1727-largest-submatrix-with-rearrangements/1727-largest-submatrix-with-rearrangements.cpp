class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int max_ar = 0;
        vector<int>hist(n, 0);
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                // the reason we initialize the hist to be 0 is because a building cannot have any zeros
                if(matrix[i][j] == 0)
                    hist[j] = 0;
                else
                    hist[j] += 1;
            }
        
            // similar to maximal rectangle, we sort the pillar and then find the max_ar possible
            vector<int> sorted_pillars = hist;
            sort(sorted_pillars.begin(), sorted_pillars.end());
            for(int j = 0; j < n; ++j){
                max_ar = max(max_ar, sorted_pillars[j] * (n - j));
            }
        }
        return max_ar;
    }
};