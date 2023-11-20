class Solution {
public:
    void solve(string brackets, int open, int close, vector<string>& res){
        if(open == 0 and close == 0){
            res.push_back(brackets);
            return;
        }
        if(open == close){
            brackets.push_back('(');
            open--;
            solve(brackets, open, close, res);
        }
        else if(open == 0){
            brackets.push_back(')');
            close--;
            solve(brackets, open, close, res);
        }else{
            solve(brackets+'(', open-1,close,res);
            solve(brackets+')', open,close-1, res);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string>res;
        solve("", open, close,res);
        return res;
    }
};