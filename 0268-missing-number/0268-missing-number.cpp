class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum =0;
        int total = nums.size()*(nums.size() + 1)/2;
        for(auto i : nums)
            sum+=i;
        return total-sum;
    }
};