class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         The basic thinking is that we keep two counter variables, slow is incremented by +1 and fast by +2 and at one point they will be pointing to the repeating elements, which is returned by the slow pointer. 
        if (nums.size() > 1)
        {
            int slow = nums[0];
            int fast = nums[nums[0]];
            while (slow != fast)
            {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }

            fast = 0;
            while (fast != slow)
            {
                fast = nums[fast];
                slow = nums[slow];
            }
            return slow;
        }
        return -1;
    }
};