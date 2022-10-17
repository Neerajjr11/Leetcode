class Solution {
public:
    int commonFactors(int a, int b) {
        int n = gcd(a,b);
        int count;
        for(int i = 1; i<=n ; i++){
            if(n%i==0)
                count++;
        }
        return count;
    }
};