class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        // to get the max of height in left array to the element
        vector<int> prefix_mheight(n, 0);
        prefix_mheight[0] = height[0];
        for(int i = 1; i < n; i++){
            prefix_mheight[i] = max(height[i], prefix_mheight[i - 1]);
        }
        // to get the max of height in right array to the element
        vector<int> suffix_mheight(n, 0);
        suffix_mheight[n - 1] = height[n - 1];
        for(int i = n - 2; i >= 0; i--){
            suffix_mheight[i] = max(height[i], suffix_mheight[i + 1]);
        }
        int total_water = 0;
        for(int i = 0; i < n; i++){
            total_water += (min(prefix_mheight[i], suffix_mheight[i]) - height[i]);
        }
        return total_water;
    }
};