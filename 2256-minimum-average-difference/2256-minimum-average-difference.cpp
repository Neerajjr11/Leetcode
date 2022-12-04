class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = int(nums.size());
        vector<long long> pre(n+1);
        vector<long long> suff(n+1);
        // pre[0] = nums[0];
        for(int i=0; i< n; ++i)
          {
           pre[i+1] = pre[i] + nums[i];
          }
        // suff[n-1] = nums[n-1];
        for(int i = n-1; i >= 0; --i)
        {
            suff[i] = suff[i+1] + nums[i];
        }
        int mini = INT_MAX,ans = -1;
        
        for(int i = 0; i < n; ++i){
                long long avg1 = pre[i+1];
                avg1 /=(i+1);
                long long avg2 = suff[i+1];
                if(i != n-1)
                avg2 /= (n - i - 1);
                int diff = int(abs(avg1 - avg2));
                if(diff < mini){
                    mini = diff;
                    ans = i;
                }
        }
        return ans;
    }
};