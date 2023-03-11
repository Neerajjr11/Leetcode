class Solution {
public:
    int atMostK(vector<int>& nums, int k){
        int i = 0, j = 0, n = nums.size();
        unordered_map<int, int> mp;
        int res = 0;
        while(j < n){
            mp[nums[j]]++;
            if(mp.size() <= k){
                // num of subarrays from i to j
                res += (j - i + 1);
                j++;
            }
            else{
                while(mp.size() > k){
                    mp[nums[i]]--;
                    if(mp[nums[i]] == 0)
                        mp.erase(nums[i]);
                    i++;
                }
                res += (j - i + 1);
                j++;
            }
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        // exactly(K) = num of subarrays atMost(K) -  num of subarrays atMost(K-1)
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};