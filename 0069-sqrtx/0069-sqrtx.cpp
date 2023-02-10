class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int res = 0;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            long long midsq = mid * mid;
            if(midsq == x)
                return mid;
            else if(midsq > x)
                high = mid - 1;
            else{
                low = mid + 1;
                res = mid;
            }
        }
        return res;
    }
};