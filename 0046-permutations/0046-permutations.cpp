class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<vector<int>> res;
        vector<int> helper;
        
        function<void(vector<int>, unordered_map<int, int>)> solve = [&](vector<int> helper, unordered_map<int, int> mp){
            if(helper.size() == nums.size()){
                res.push_back(helper);
                return;
            }
            for(int i = 0; i < nums.size(); i++){
                if(mp[nums[i]] == 0){
                    helper.push_back(nums[i]);
                    mp[nums[i]] = 1;
                    solve(helper, mp); 
                    helper.pop_back();
                    mp[nums[i]] = 0;
                }
            }
            
        };
        solve(helper, mp);
        return res;
    }
};