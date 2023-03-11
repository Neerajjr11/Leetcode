class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int i = 0, j = 0, n = nums.size();
        long long res = 0;
        long long sumi = 0;
        while(j < n){
            sumi += nums[j];
            while((sumi * (j - i + 1)) >= k){
                sumi -= nums[i];
                i++;
            }
            res += (j - i + 1);
            j++;
        }
        return res;
    }
};