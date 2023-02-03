class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        string res1 = "";
        for(char c : s){
            if(isalpha(c) or isdigit(c)){
                res += tolower(c);
                res1 += tolower(c);
            } 
        }
        reverse(res.begin(), res.end());
        return res == res1;
    }
};