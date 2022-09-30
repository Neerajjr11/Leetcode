class Solution {
public:
    int mySqrt(int x) {
        long long i;
        if(x==0) return 0;
        if(x<4) return 1;
        for(i=1;i<=x/2;i++)
            if((i*i<=x)&&((i+1)*(i+1)>x)) return i;
        return 0;
    }
};