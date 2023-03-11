class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini = INT_MAX, sumi = 0;
        int i = 0, j = 0, n = nums.size();
        while(j < n){
            sumi += nums[j];
            if(sumi < target)
                j++;
            else{
                while(sumi >= target){
                    mini = min(mini, (j - i + 1));
                    sumi -= nums[i];
                    i++;
                }
                j++;
            }
        }
        if(mini == INT_MAX)
            return 0;
        return mini;
    }
};