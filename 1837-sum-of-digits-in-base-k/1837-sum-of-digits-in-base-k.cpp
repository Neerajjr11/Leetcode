class Solution {
public:
    int sumBase(int n, int k) {
        int res = 0, num = 0;
        while(n != 0){
            num = n % k;
            res += num;
            n /= k;
        }
        return res;
    }
};