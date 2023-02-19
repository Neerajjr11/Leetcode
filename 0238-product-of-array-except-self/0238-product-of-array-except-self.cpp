class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        pre[0] = nums[0];
        for(int i = 1; i < nums.size(); i++)
            pre[i] = pre[i - 1] * nums[i];
        vector<int> suff(n);
        suff[n - 1] = nums[n - 1];
        for(int i = nums.size() - 2; i >= 0; i--)
            suff[i] = suff[i + 1] * nums[i];
        vector<int> res(n);
        res[0] = suff[1];
        for(int i = 1; i < nums.size() - 1; i++)
            res[i] = pre[i - 1] * suff[i + 1];
        res[n - 1] = pre[n - 2];
        return res;
    }
};