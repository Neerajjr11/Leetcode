class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<long long int> s;
        long long int  n = nums.size();
        long long int l = 0, r = 0;
        long long int ans = 0, sum = 0;
        for(r = 0; r<n; r++)
        {
            while( (s.count(nums[r]) || s.size() >= k) && l < r)
            {
                sum -= nums[l];
                s.erase(nums[l]);
                l++;
            }
            sum +=nums[r];
            s.insert(nums[r]);

            if (s.size() == k)
                ans = max(ans,sum);
        }
        return ans;
    }
};