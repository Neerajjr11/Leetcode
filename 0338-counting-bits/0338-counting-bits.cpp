class Solution {
public:
    vector<int> countBits(int n) {
        // BRUTE FORCE APPROACH
        // here the brute force would to iterate from 0 -> n and for every number you find the number of 1 bits
        // since the max possible bits are 32 it becomes 32*N but since n is till 10^5 therefore the
        // time complexity becomes n*log(n)
        
        // EFFICIENT APPROACH
        // here if x/2 = y then the difference in the bits of x and y is <= 1 because dividing by 2 means
        // right shift by 1 bit, therefore LSB is lost
        // if x is odd then LSB is 1 therefore when we Right Shift we loose it then the differnce becomes 1
        // if x is even then LSB is 0 therefore when we right shift we loose it then the difference becomes 0
        vector<int> res(n);
        res.push_back(0);
        for(int i = 1; i <= n; i++){
            // to check if the number is odd or even
            if(i & 1)
                // if i is odd
                res[i] = 1 + (res[floor(i / 2)]);
            else
                res[i] = res[(i / 2)];
        }
        return res;
    }
};