class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0, start = 0, end = 0;
        string res = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' and count == 0)
                count++;
            else if(s[i] == '(' and count >= 1){
                res += s[i];
                count++;
            }
            else if(s[i] == ')' and count > 1){
                res += s[i];
                count--;
            }
            else
                count--;
        }
        return res;
    }
};