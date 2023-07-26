// Approach 1 - Using a map or freq counter to keep track of all elements
/*
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
*/

// Approach - 2 by swapping indices within the array
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        function<void(int ind, vector<int>)> solve = [&](int ind, vector<int> nums){
            if(ind == nums.size()){
                res.push_back(nums);
                return;
            }
            for(int j = ind; j < nums.size(); j++){
                swap(nums[ind], nums[j]);
                solve(ind + 1, nums);
            }
            
        };
        solve(0, nums);
        return res;
    }
};
