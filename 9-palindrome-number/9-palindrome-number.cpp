class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        string n = to_string(x);
        reverse(y.begin(),y.end());
        if (n == y)
            return true;
        else
            return false;
        
    }
};