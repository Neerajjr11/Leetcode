class Solution {
public:
    
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        while(n--){
        for(int i = 0;i<n;i++){
            nums[i] = (nums[i]+nums[i+1])%10;
        }
        }
        return nums[0];
    }
};