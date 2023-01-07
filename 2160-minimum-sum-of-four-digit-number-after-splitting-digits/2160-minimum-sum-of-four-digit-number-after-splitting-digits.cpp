class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        int s1 = 10*(s[0] - '0') + (s[3] - '0');
        int s2 = 10*(s[1] - '0') + (s[2] - '0');
        return s2 + s1;
    }
};