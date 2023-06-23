class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int res = 0;
        if(nums.size() <= 2)
            return nums.size();
        unordered_map<int,int>mp[nums.size() + 1];
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                int diff = nums[i] - nums[j];
                int counter = 1;
                if(mp[j].count(diff))
                    counter = mp[j][diff];
                mp[i][diff] = 1 + counter;
                res = max(res, mp[i][diff]);
            }
        }
        return res;
    }
};