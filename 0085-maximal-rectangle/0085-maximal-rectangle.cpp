class Solution {
public:
        int MAH(vector<int>& heights) {
        // find the nsl - next smallest left of the element
        stack<pair<int,int>>nsl_st;
        // to store the indices of the next smallest left elements
        vector<int> left_ind;
        for(int i = 0; i < heights.size(); i++){
            while(!nsl_st.empty() and nsl_st.top().first >= heights[i])
                nsl_st.pop();
            if(nsl_st.empty())
                left_ind.push_back(-1);
            else
                left_ind.push_back(nsl_st.top().second);
            nsl_st.push({heights[i], i});
        }
        
        // find the nsr - next smallest right of the element
        stack<pair<int,int>>nsr_st;
        // to store the indices of the next smallest right elements
        vector<int> right_ind;
        for(int i = heights.size() - 1; i >= 0; i--){
            while(!nsr_st.empty() and nsr_st.top().first >= heights[i])
                nsr_st.pop();
            if(nsr_st.empty())
                right_ind.push_back(heights.size());
            else
                right_ind.push_back(nsr_st.top().second);
            nsr_st.push({heights[i], i});
        }
        reverse(right_ind.begin(), right_ind.end());
        // the get max width possible for each building
        vector<int> width(heights.size(), 0);
        for(int i = 0; i < heights.size(); i++)
            width[i] =  right_ind[i] - left_ind[i] - 1;
        
        int max_ar = 0;
        for(int i = 0; i < heights.size(); i++){
            // cout<< width[i]<<" ";
            max_ar = max(max_ar, (heights[i] * width[i]));
        }
        return max_ar;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int max_ar = 0;
        vector<int>hist(m, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                // the reason we initialize the hist to be 0 is because a building cannot have any zeros
                if(matrix[i][j] == '0')
                    hist[j] = 0;
                else
                    hist[j] = hist[j] + 1;
            }
            max_ar = max(max_ar, MAH(hist));
        }
        return max_ar;
    }
};