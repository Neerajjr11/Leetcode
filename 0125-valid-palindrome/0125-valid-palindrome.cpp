class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        for(auto& x : s){
            if(isalpha(x) or isdigit(x))
                new_s += tolower(x);
        }
        string rev_s = new_s;
        reverse(rev_s.begin(), rev_s.end());
        return rev_s == new_s;
    }
};