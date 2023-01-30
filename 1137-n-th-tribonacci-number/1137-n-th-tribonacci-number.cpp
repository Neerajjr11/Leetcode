class Solution {
public:
    int tribonacci(int n) {
        if(n == 0)
            return 0;
        if(n == 1 or n == 2)
            return 1;
        int x = 0, y = 1, z = 1;
        int sum = 0;
        for(int i = 3; i <= n; i++){
            sum = x + y + z;
            x = y;
            y = z;
            z = sum;
        }
        return sum;
    }
};