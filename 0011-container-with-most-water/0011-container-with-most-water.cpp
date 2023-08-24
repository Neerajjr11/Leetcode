class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int maxi = 0;
        while(i <= j){
            int min_building = min(height[i], height[j]);
            maxi = max(maxi, min_building * (j - i));
            if(height[i] <= height[j])
                i++;
            else
                j--;
        }
        return maxi;
    }
};