class Solution {
public:
    string rev_Invert(string s){
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1')
                s[i] = '0';
            else
                s[i] = '1';
        }
        return s;
    }
    int ans = 0;
    void solve(string& s, int n){
        if(n == 1){
            s = "0";
            return;
        }
        solve(s,n-1);
        s = s + "1" + rev_Invert(s);
    }
    char findKthBit(int n, int k) {
        string s = "";
        solve(s,n);
        // cout << s;
        return s[k - 1];
    }
};