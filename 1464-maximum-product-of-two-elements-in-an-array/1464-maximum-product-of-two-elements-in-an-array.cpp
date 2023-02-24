class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int maxidx = max_element(nums.begin(), nums.end()) - nums.begin();
        int smaxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= smaxi && nums[i] <= maxi && i != maxidx)
                smaxi = nums[i];
        }
        return ((maxi - 1) * (smaxi - 1));
    }
};