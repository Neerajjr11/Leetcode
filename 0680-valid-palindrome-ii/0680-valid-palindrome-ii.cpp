class Solution {
public:
    bool isPalindrome(string s, int i , int j){
        while(i <= j){
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        int count = 0;
        bool check1, check2;
        while(i <= j){
            if(s[i] != s[j]){
                check1 = isPalindrome(s, i + 1, j);
                check2 = isPalindrome(s, i , j - 1);
                if(check2 == true || check1 == true)
                    return true;
                else
                    return false;
                count++;
            }else{
                i++;
                j--;
            }
        }
        if(count > 1)
            return false;
        return true;
    }
};