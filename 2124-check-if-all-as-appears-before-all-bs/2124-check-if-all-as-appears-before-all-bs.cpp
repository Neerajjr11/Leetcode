class Solution {
public:
    bool checkString(string s) {
        char cmp = 'a';
        int i;
        for(i = 0; i < s.length(); i++){
            if(s[i] != cmp){
                cmp = 'b';
                break;
            }
        }
        for(; i < s.length(); i++){
            if(s[i] != cmp)
                return false;
        }
        return true;
    }
};