class Solution {
public:
    int rev(int x){
        int reverse = 0;
        while(x != 0){
            int rem = x % 10;
            x /= 10;
            reverse = reverse * 10 + rem;
        }
        return reverse;
    }
    int countNicePairs(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = (nums[i] - rev(nums[i]));
        }
        map<int,long>mp;
        for(auto& x : nums)
            mp[x]++;
        int res = 0;
        for(auto& i : mp){
            // with each value, we can form n*(n-1)/2 pairs
            res = (res + (i.second * (i.second - 1) / 2)) % 1000000007;                
            
        }
        return res;
    }
};