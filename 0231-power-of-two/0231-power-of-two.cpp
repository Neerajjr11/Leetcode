class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0)
            return false;
        if(n == 1)
            return true;
        if(n % 2 == 0 and isPowerOfTwo(n/2))
            return true;
        else
            return false;
    }
};