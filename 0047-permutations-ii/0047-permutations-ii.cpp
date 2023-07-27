class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(begin(nums), end(nums));
        function<void(int ind, vector<int>)> solve = [&](int ind, vector<int> nums){
            if(ind == nums.size()){
                res.push_back(nums);
                return;
            }
            for(int j = ind; j < nums.size(); j++){
                if(j > ind and nums[j] == nums[ind]) continue;
                swap(nums[ind], nums[j]);
                solve(ind + 1, nums);
            }
            
        };
        solve(0, nums);
        return res;
    }
};