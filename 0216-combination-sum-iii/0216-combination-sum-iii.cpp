class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combinations = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> res;
        vector<int> helper;
        
        function<void(int, int)>solve = [&](int ind, int target){
            if(helper.size() == k){
                if(ind == 9 && target == 0)
                    res.push_back(helper);
                else if(target == 0)
                    res.push_back(helper);
                return;
            }
            if(ind >= 9)
                return;
            if(combinations[ind] <= target){
                helper.push_back(combinations[ind]);
                solve(ind + 1, target - combinations[ind]);
                helper.pop_back();
            }
            solve(ind + 1, target);
        };
        solve(0, n);
        return res;
    }
};