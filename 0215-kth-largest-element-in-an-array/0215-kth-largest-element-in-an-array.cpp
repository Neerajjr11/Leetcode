class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       function<int(int, int)>partition = [&](int l, int h){
           int pivot = nums[h];
           int i = l - 1;
           for(int j = l; j <= h - 1; j++){
               if(nums[j] > pivot){
                   i++;
                   swap(nums[i], nums[j]);
               }
           }
           swap(nums[i + 1], nums[h]);
           return(i + 1);
       };
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
         int p = partition(l, r);
         if(p == k - 1)
             return nums[p];
        else if( p > k - 1)
            r = p - 1;
        else
            l = p + 1;
        }
        return -1;
    }
};