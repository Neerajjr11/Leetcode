class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> mod(k);
        if(nums.size() == 1)
            if(nums[0] % k == 0)
                return 1;
            else
                return 0;
        int curr_sum = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            curr_sum += nums[i];
            mod[((curr_sum % k) + k) % k]++;
        }
        for(int i = 0; i < k; i++){
            if(mod[i] > 1)
                count += (mod[i] * (mod[i] - 1)) / 2;
        }
        count += mod[0];
        return count;
    }
};