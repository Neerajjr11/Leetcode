class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();
        unordered_map<int, int> mp;
        int res = 0;
        while(j < n){
            mp[nums[j]]++;
            if(mp.size() <= 2){
                if(mp[0] <= 1){
                    res = max(res, (j - i));
                    j++;
                }
                else{
                    while(mp[0] > 1){
                        mp[nums[i]]--;
                        if(mp[nums[i]] == 0)
                            mp.erase(nums[i]);
                        i++;
                    }
                    j++;
                }
            }else{
                while(mp.size() > 2){
                    mp[nums[i]]--;
                    if(mp[nums[i]] == 0)
                        mp.erase(nums[i]);
                    i++;
                }
                j++;
            }
        }
        return res;
    }
};