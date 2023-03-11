class Solution {
public:
    int atmostgoal(vector<int>& nums, int goal){
        int i = 0, j = 0, n = nums.size();
        int res = 0, sumi = 0;
        while(j < n){
            sumi += nums[j];
            if(sumi <= goal){
                res += (j - i + 1);
                j++;
            }else{
                while(sumi > goal){
                    sumi -= nums[i];
                    i++;
                }
                res += (j - i + 1);
                j++;
            }
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal == 0)
            return atmostgoal(nums, goal);
        else
            return atmostgoal(nums, goal) - atmostgoal(nums, goal - 1);
    }
};