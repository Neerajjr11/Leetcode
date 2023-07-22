class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        int n = candidates.size();
        vector<int>helper;
        function<void(int,int)> solve = [&](int ind, int s) {
            if(ind == n){
                if(s == 0)
                    res.push_back(helper);
                return;
            }
            if(candidates[ind] <= s){
                helper.push_back(candidates[ind]);
                s -= candidates[ind];
                solve(ind, s);
                s += helper[helper.size() - 1];
                helper.pop_back();
            }
            solve(ind + 1, s);
        };      
        
        solve(0,target);
        return res;
    }
};