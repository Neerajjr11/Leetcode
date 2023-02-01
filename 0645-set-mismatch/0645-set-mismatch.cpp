class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++)
            if(count(nums.begin(), nums.end(), nums[i]) > 1){
                res.push_back(nums[i]);
                int tot_sum = (nums.size() * (nums.size() + 1)) / 2;
                int left = accumulate(nums.begin(), nums.end(), 0);
                if(tot_sum < left)
                    res.push_back(nums[i] - abs(tot_sum - left));
                else
                    res.push_back(nums[i] + abs(tot_sum - left));
                return res;
            }
        return res;
    }
};