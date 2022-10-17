class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        nums.push_back(start);
        int ans = nums[0];
        for(int i = 1 ; i<n;i++){
            nums.push_back(start + (2*i));
            ans ^= nums[i];
        }
        return ans;
    }
};