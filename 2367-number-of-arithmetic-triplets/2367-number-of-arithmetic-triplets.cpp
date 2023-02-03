class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt = 0;
        int nums1 = 0;
        int nums2 = 0;
        for(int i = 0; i < nums.size(); i++){
            nums1 = nums[i];
            nums2 = nums1 - diff;
            if(count(nums.begin(), nums.end(), nums2) >= 1){
                if(count(nums.begin(), nums.end(), (nums1 - diff)) > 1 or count(nums.begin(), nums.end(), (nums2 - diff)) >= 1)
                    cnt++;
            }
        }
        return cnt;
    }
};