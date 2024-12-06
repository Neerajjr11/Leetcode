class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int c = 0;
        bitset<10001> s;
        for (int i : banned) 
            s[i] = true;
        
        for (int i = 1; i <= n && i <= maxSum; i++) {
            if (!s[i]) {
                c++;
                maxSum -= i;
            }
        }
        return c;
    }
};