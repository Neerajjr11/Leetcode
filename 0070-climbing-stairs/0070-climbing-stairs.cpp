class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2)
            return n;
        int prev2 = 1, prev = 2;
        int res;
        for(int i = 3; i <= n; i++){
            res = prev + prev2;
            prev2 = prev;
            prev = res;
        }
        return res;
    }
};