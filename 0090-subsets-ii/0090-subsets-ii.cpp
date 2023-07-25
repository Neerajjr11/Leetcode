class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> helper;
        
        function<void(int)> solve = [&](int ind){
            res.push_back(helper);
            for(int j = ind; j < nums.size(); j++){
                if(j > ind && nums[j] == nums[j - 1])
                    continue;
                helper.push_back(nums[j]);
                solve(j + 1);
                helper.pop_back();
            }
        };
        solve(0);
        return res;
    }
};