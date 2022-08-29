class Solution {
public:
    bool isPalindrome(int x) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        string y = to_string(x);
        string n = to_string(x);
        reverse(y.begin(),y.end());
        if (n == y)
            return true;
        else
            return false;
        
    }
};