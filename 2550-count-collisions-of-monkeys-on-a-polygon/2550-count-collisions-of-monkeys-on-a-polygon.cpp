#define mod 1000000007
class Solution {
public:
    long long monkeyMove(long long int n) {
        // ans is 2 ^ n - 2
        long long ans = 1;
        long long x = 2;
        while(n > 0){
            if(n & 1)
                ans = ans * x % mod;
            n = n >> 1;
            x = x * x % mod;
            
        }
        return (ans - 2 + mod) % mod;
    }
};