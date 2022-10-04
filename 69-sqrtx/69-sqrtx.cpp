class Solution {
public:
    int mySqrt(int x) {
        long long low = 1 , high = x ,  ans = -1;
        if (x==0 || x == 1)
            return x;
        while (low <= high){
            long long mid = (low + high)/2;
            long long sq = mid * mid;
            if (sq == x)
                return mid;
            else if(sq > x)
                high = mid - 1;
            else
            {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};