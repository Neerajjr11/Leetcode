class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = nums.size() - 1;
        if(nums[0] < nums[n - 1])
                return nums[0];
        while(start <= end){
            int mid = start + (end - start) / 2;
            int next = nums[(mid + 1)  % n];
            int prev = nums[(mid + n - 1) % n];
            
            if(nums[mid] <= prev and nums[mid] <= next)
                return nums[mid];
            if(nums[0] <= nums[mid])
                start = mid + 1;
            else if(nums[mid] <= nums[n - 1])
                end = mid - 1;
        }
        return -1;
    }
};