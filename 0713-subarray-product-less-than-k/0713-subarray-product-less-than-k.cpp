class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)
            return 0;
        int i = 0, j = 0, n = nums.size();
        int prod = 1, res = 0;
        while(j < n){
            prod *= nums[j];
            while(prod >= k){
                prod /= nums[i];
                i++;
            }
            res += (j - i + 1);
            j++;
        }
        return res;
    }
};