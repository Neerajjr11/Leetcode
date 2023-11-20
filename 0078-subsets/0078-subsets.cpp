class Solution {
public:
    vector<vector<int>>res;
    void solve(vector<int> nums, vector<int>& helper){
        if(nums.size() == 0){
            res.push_back(helper);
            return;
        }
        vector<int> op1 = helper;
        vector<int>op2 = helper;
        op2.push_back(nums[0]);
        nums.erase(nums.begin() + 0);
        solve(nums, op1);
        solve(nums, op2);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>helper;
        solve(nums,helper);
        return res;
    }
};