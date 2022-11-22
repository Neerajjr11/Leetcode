class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size() , index = 0;
        while(index < length){
            if(nums[index] == val){
                nums[index] = nums[length - 1];
                length--;
            }
            else
                index++;
        }
        return length;
    }
};