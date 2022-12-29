class Solution {
public:
    int trailingZeroes(int n) {
        //first we need to generate 10's to get some zeros
        // To generate 10's we need to find 5's and 2's because 10 = 2 x 5
        // we only need to find all 2 and 5 pairs together, other numbers because don't help generating 10's
        // Besides, we will have enough (at least as many as 5's) 2's because of even numbers so we don't need to worry about number of 2's
        // That's why we will focus on the number of 5's which will lead us towards the result
        // this solution is log(n) time
        int count = 0;
        while(n > 0){
            count += n/5;
            n /=5;
        }
        return count;
    }
};