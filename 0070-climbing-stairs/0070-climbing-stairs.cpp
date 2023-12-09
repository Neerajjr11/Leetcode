class Solution {
public:
    int climbStairs(int n) {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        // this is fibonnacci
        int first = 0;
        int second = 1;
        for(int i = 1; i <= n; i++){
            int temp = first;
            first = second;
            second = second + temp;
        }
        return second;
    }
};