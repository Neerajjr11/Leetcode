class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> helper;
        
        function<void(int, int)> solve = [&](int ind, int prev){
            if(ind == nums.size()){
                res.push_back(helper);
                return;
            }
//          Not pick
            solve(ind + 1, prev);
            // pick
            if(ind > 0 and nums[ind] == nums[ind - 1] and prev != ind - 1)
                return;
            helper.push_back(nums[ind]);
            solve(ind + 1, ind);
            helper.pop_back();
                
        };
        solve(0, -1);
        return res;
    }
};