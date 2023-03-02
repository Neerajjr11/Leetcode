class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(), i = 0;
        while(i < n){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                n--;
            }else{
                i++;
            }
        }
        return nums.size();
    }
};