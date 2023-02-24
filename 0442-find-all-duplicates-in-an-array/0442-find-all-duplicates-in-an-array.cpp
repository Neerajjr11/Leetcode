class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.size() == 1)
            return {};
        nums.push_back(0);
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] > n)
                nums[nums[i] % n] += n;
            else
                nums[nums[i]] += n;
        }
        for(int i = 0; i < n; i++){
            if(nums[i] / n >= 2)
                res.push_back(i);
        }
        return res;
    }
};