class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int smallNumDiff = (nums[0] * nums[1]);
        int largeNumDiff = (nums[nums.size() - 1] * nums[nums.size() - 2]);
        return largeNumDiff - smallNumDiff;
    }
};