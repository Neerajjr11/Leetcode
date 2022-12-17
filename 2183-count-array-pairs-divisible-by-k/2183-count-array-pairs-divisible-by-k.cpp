class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        //If (a*b)%k==0, then
    // gcd(a,k) * gcd(b,k) % k is also 0.
        unordered_map<long long, long long> gcdCount;
        long long res = 0;
        for(int i = 0; i < nums.size(); i++){
            long long currgcd = __gcd(nums[i],k);
            for(auto &[gcd, count] : gcdCount)
                if((currgcd * gcd) % k ==0)
                    res += count;
            gcdCount[currgcd]++;
        }
        return res;
    }
};