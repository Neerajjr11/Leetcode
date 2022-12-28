class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarray_sum;
        for(int i = 0; i < n; i++){
            int total_sum = 0;
            for(int j = i; j < n; j++){
                total_sum +=nums[j];
                subarray_sum.push_back(total_sum);
            }
        }
        sort(subarray_sum.begin(), subarray_sum.end());
        long long ans = 0;
        long long mod = 1e9 + 7;
        for(int i = left - 1; i < right; i++)
            ans = (ans + subarray_sum[i]) % mod;
        return ans;
    }
};