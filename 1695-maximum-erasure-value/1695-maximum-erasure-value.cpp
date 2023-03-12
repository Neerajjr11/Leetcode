class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int i = 0, j = 0 , n = nums.size();
        int sumi = 0, max_sumi = 0;
        while(j < n){
            mp[nums[j]]++;
            sumi += nums[j];
            if(mp.size() == (j - i + 1)){
                max_sumi = max(max_sumi, sumi);
            }else{
                while(mp.size() < (j - i + 1)){
                    sumi -= nums[i];
                    mp[nums[i]]--;
                    if(mp[nums[i]] == 0)
                        mp.erase(nums[i]);
                    i++;
                }
            }
            j++;
        }
        return max_sumi;
    }
};