class Solution {
public:
    void solve( int n, int open,int close,vector<string>&res, string helper){
        if(helper.size() == 2 * n){
                res.push_back(helper);
                return;
            }
        if(close < open)
            solve(n,open,close + 1, res,helper + ")");
        if(open < n)
            solve(n ,open + 1,close, res, helper + "(");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string helper = "";
        solve(n,0,0,res,helper);
        return res;
    }
};