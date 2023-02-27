class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return {0};
        vector<int> pre(n);
        pre[0] = nums[0];
        for(int i = 1; i < n; i++){
            pre[i] = nums[i] + pre[i - 1];
        }
        vector<int> suff(n);
        suff[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--){
            suff[i] = nums[i] + suff[i + 1];
        }
        vector<int> res(n);
        res[0] = suff[1];
        res[n - 1] = pre[n - 2];
        for(int i = 1; i < n - 1; i++){
            res[i] = abs(pre[i - 1] - suff[i + 1]);
        }
        return res;
    }
};