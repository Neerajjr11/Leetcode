class Solution {
public:
    int bulbSwitch(int n) {
        // the value increases once we get a perfect square i.e for n = 1 it is 1
        // for n = 4 it is 2, n = 9 it is 3 ...so on
        // therefore we can just return sqrt(n) as it returns the number i.e sqrt(3) is 1
        return sqrt(n);
    }
};