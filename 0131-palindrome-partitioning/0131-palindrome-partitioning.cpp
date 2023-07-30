class Solution {
public:
    bool isPalindrome(string s){
        string str = s;
        reverse(s.begin(), s.end());
        return s == str;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> helper;
        
        function<void(int , string)> solve = [&](int ind, string s){
            if(ind == s.size()){
                res.push_back(helper);
                return;
            }
            for(int j = ind; j < s.size(); j++){
                if(isPalindrome(s.substr(ind, j - ind + 1))){
                    helper.push_back(s.substr(ind, j - ind + 1));
                    solve(j + 1, s);
                    helper.pop_back();
                }
            }
        };
        solve(0, s);
        return res;
    }
};