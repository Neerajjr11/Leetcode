class Solution {
    int firstOcc(vector<int>& nums, int x, int n){
        int low = 0; int high = n-1,mid;
        while(low<=high){
             mid = (low+high)/2;
            if(nums[mid] > x)
                high = mid - 1;
            else if (nums[mid] < x)
                low = mid + 1;
            else
            {
                if (mid == 0 || nums[mid - 1] != nums[mid])
                    return mid;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
    
    int lastOcc(vector<int>& nums, int x, int n){
        int low = 0; int high = n-1,mid;
        while(low<=high){
             mid = (low+high)/2;
            if(nums[mid] > x)
                high = mid - 1;
            else if (nums[mid] < x)
                low = mid + 1;
            else
            {
                if (mid == n-1 || nums[mid] != nums[mid + 1])
                    return mid;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2);
        ans[0] = firstOcc(nums,target,n);
        ans[1] = lastOcc(nums,target,n);
        return ans;
    }
};