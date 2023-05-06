#define ll long long int
class Solution {
public:
    // using binary exponentiation
    // a^n % p
    // compute power of a number [a^n % p] in log(n) time
    ll power(ll a, ll n, ll p){
        ll res = 1;
        while(n){
            if(n % 2 == 1){
                res = (res * a) % p;
                n--;
            }else{
                a = (a * a) % p;
                n = n / 2;
            }
        }
        return res;
    }
    int numSubseq(vector<int>& nums, int target) {
        // sort first
        // solved using binary exponentiation
        // let's take eg of
        // [3,5,6,7] target = 9
        // taking 2 pointers
        // let's take the minimum element as 3 i.e i = 3
        // find j i.e maximum possible element we can take such that min + max <= 9 (target)
        // here it is 6 therefore j = 6
        // now the number of elements between 3 to 6 are 1 i.e 5
        // lets check the number of subsequences that can be formed between 3 -> 6
        // 3 -  possible
        // 3,5 - possible
        // 3,6 - possible
        // 3,5,6 - possible
        // i.e for 2 nos. 4 possiblities
        // 2^(j-i) = 2^(2 - 0) = 2^2 = 4
        sort(begin(nums), end(nums)); // to get the max ele for every ith element using 2 pointer or binary search
        int res = 0, mod = 1e9+7;
        for(int i = 0, j = nums.size() - 1; i <= j; ++i){
            while(i <= j and nums[i] + nums[j] > target)
                --j; // decreasing j pointer until it becomes <= target
            if(j >= i) // as j might surpass i
            {
                int pw = (int)power(2, j - i, mod);
                res = (res + pw) % mod; // ith element will contribute 2^(j - i) number of subsequences
            }
        }
        return res;
        
    }
};

// there are 2 ways to find exponent
// binary exponentiation - (log(n)) - per query
// pre compute - O(n) and per query - O(1)
// Method -2 using pre computation
// class Solution {
// public:
//     int numSubseq(vector<int>& nums, int target) {
//         sort(begin(nums), end(nums));
//         int res = 0, mod = 1e9+7;
//         vector<int> pre = {1};
//         for(int i = 1; i <= nums.size(); ++i)
//             pre.push_back((pre.back << 1) % mod); // precomputing 2^i % mod for every number
//         for(int i = 0, j = nums.size() - 1; i <= j; ++i){
//             while(i <= j && nums[i] + nums[j] > target)
//                 --j;
//             if(j >= i){
//                 int pw = pre[j - 1]; // getting the pre computed power of 2 in O(1)
//                 res = (res + pw) % mod;
//             }
//         }
//         return res;
//     }
// };