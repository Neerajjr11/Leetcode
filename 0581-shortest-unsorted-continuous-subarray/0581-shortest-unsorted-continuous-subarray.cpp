class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int min = nums[nums.size() -1];
        int max = nums[0];
        int end = -1;
        int start = 0;
        for(int i = 1; i<n;i++){
            if(max>nums[i])
                end = i;
            else
                max = nums[i];
        }
        for(int i = n-2;i>=0;i--){
            if(min<nums[i])
                start = i;
            else
                min = nums[i];
        }
        return end - start + 1;
            
    }
};