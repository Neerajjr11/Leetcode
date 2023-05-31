class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int res = nums[0];
        int maxi = nums[0];
        int mini = nums[0];
        int sumi = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 1; i < nums.size(); i++){
            maxi = max(maxi + nums[i], nums[i]);
            mini = min(mini + nums[i], nums[i]);
            if(sumi != mini)
                res = max(max(res, maxi), (sumi - mini));
            else
                res = max(res, maxi);
            // cout<<res<<" "<<maxi<<" "<<mini<<" ";
        }
        return res;
    }
};