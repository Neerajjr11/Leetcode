class Solution {
public:
    void maxHeapify(vector<int>& nums, int n, int i){
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if(left < n and nums[left] > nums[largest])
            largest = left;
        if(right < n and nums[right] > nums[largest])
            largest = right;
        if(largest != i){
            swap(nums[largest], nums[i]);
            maxHeapify(nums, n, largest);
        }
    }
    void buildHeap(vector<int>& nums, int n){
        for(int i = (n - 2)/ 2; i >= 0; i--){
            maxHeapify(nums, n, i);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        buildHeap(nums, n);
        for(int i = n - 1; i >= 0; i--){
            swap(nums[0], nums[i]);
            maxHeapify(nums, i, 0);
        }
        return nums;
    }
};