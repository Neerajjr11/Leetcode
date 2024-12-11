class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 0, n = nums.size(), sumi = 0, maxLen = 0;
        while(j < n){
            sumi = (nums[j] - nums[i]);
            if(sumi <=(2 * k)){
                maxLen = max(maxLen, (j - i + 1));
                j++;
            }
            else{
                    i++;
                j++;
            }
        }
        return maxLen;
    }
};