class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int>res;
        int n = nums.size();
        int sum = 0;
        res.push_back(nums[0]);
        for (int i=1;i<n;i++){
            res.push_back(res.back() + nums[i]);
        }
        return res;
    }
};