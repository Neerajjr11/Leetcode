class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<int>s;
        int ans = -1;
        for(int i = 0 ;i<n;i++){
            s.insert(nums[i]);
            if(s.find(-1*nums[i]) !=s.end())
                ans = max(ans,abs(nums[i]));
        }
        return ans;
    }
};