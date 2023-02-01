class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
       
        map<long long,long long> mp;
        for(int i = 0; i < nums.size()-1 ; i++){
            long long sum = nums[i]+nums[i+1];
            if(mp.find(sum)!=mp.end())
                return true;
            else
                mp[sum] = 1;
        }
        
        return false;
    }
};