class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> pre;
        for(int i = 0; i < nums.size() - 1; i++){
            pre.push_back(nums[i] + nums[i + 1]);
            if(count(pre.begin(), pre.end(), pre[i]) > 1)
                return true;
        }
        return false;
    }
};