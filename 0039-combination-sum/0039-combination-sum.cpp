class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> helper;
        int n = candidates.size();
        
        function<void(int, int)> solve = [&](int ind, int target){
            // base case
            if(ind == n){
                if(target == 0)
                    res.push_back(helper);
                return;
            }
            
            // PICKING of a number case
            if(candidates[ind] <= target){
                // add the number to the vector
                helper.push_back(candidates[ind]);
                // dont increment index as duplication is possible
                solve(ind, target - candidates[ind]);
                // the reason we are doing this as well in the loop is because there is a possiblity of candidates[ind] <= target but total crossing the target eg.
                // 2,2,2,2.2 = 8 so we need to remove the 2
                helper.pop_back();
            }
            solve(ind + 1, target);
        };
        solve(0, target);
        return res;
    }
};