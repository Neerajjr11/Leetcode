class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<=2)
            return 0;
        int maxLeft = height[0];
        int maxRight = height[n-1];
        int trappedWater = 0;
        int left = 1;
        int right = n-2;
        while (left <= right){
            if (maxLeft < maxRight){
                if (height[left] >= maxLeft)
                    maxLeft = height[left];
                
                else{
                    trappedWater +=maxLeft - height[left];}
                left +=1;
                }
            else{
                if (height[right] >=maxRight)
                    maxRight = height[right];
                else
                    trappedWater += maxRight - height[right];
                right -= 1;
                }
            }
        return trappedWater;
    }
};