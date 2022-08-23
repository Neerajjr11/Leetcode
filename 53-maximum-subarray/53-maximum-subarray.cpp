class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0, maximumSum = nums[0];
        for(int i=0;i<nums.size();i++){
           
            if(currentSum<0){
                currentSum = 0;
            }
            currentSum +=nums[i];
            maximumSum = max(maximumSum,currentSum);
        }
            return maximumSum;

    }
};