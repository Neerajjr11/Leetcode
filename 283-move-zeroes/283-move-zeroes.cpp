class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int temp = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                temp = nums[i];
                nums[i]= nums[count];
                nums[count] = temp;
                count++;
            }
        }
    }
};