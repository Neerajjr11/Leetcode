class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> mp;
        for(int i = 0;i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i = 0;i < nums.size(); i++){
            if(mp[nums[i]] == 1)
                return nums[i];
        }
        return nums[0];
    }
};