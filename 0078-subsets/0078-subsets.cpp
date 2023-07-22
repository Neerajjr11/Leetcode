class Solution {
public:
    void solve(int ind, vector<int>&helper, vector<int>&nums, int n, vector<vector<int>>&res){
        if(ind >= n){
            res.push_back(helper);
            return;
        }
        helper.push_back(nums[ind]);
        solve(ind + 1, helper, nums, n, res);
        helper.pop_back();
        solve(ind + 1, helper, nums, n, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int> helper;
        solve(0, helper, nums, nums.size(), res);
        return res;
    }
};