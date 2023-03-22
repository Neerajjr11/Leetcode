class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefixMax(n, 0);
        prefixMax[0] = height[0];
        for(int i = 1; i < n - 1; i++)
            prefixMax[i] = max(height[i] , prefixMax[i - 1]);
        vector<int> suffixMax(n, 0);
        suffixMax[n - 1] = height[n - 1];
        for(int i = n - 2; i >= 0; i--)
            suffixMax[i] = max(height[i] , suffixMax[i + 1]);
        int res = 0;
        for(int i = 1; i < n - 1; i++)
            res += (min(prefixMax[i], suffixMax[i]) - height[i]);
        return res;
        
    }
};