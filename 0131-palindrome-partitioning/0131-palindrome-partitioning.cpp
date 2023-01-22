class Solution {
public:
    bool isPalindrome(const string& s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string> > res;
        if(s.empty())
            return res;
        vector<string> path;
        function<void(int)>dfs = [&](int index){
            if(index == s.size()) {
            res.push_back(path);
            return;
            }
            for(int i = index; i < s.size(); ++i) {
                if(isPalindrome(s, index, i)) {
                    path.push_back(s.substr(index, i - index + 1));
                    dfs(i+1);
                    path.pop_back();
                }
            }
        };
        dfs(0);
        return res;
    }
};