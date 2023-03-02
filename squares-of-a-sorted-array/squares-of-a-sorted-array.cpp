class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        int k = nums.size() - 1;
        vector<int> res(nums.size());
        while(l <= r){
            if(abs(nums[l]) > abs(nums[r])){
                res[k] = (nums[l] * nums[l]);
                l++;
            }else{
                res[k] = (nums[r] * nums[r]);
                r--;
            }
            k--;
        }
        return res;
    }
};