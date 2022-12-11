class Solution {
public:
    const int MOD1 = 1e9 + 7;
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        int res = -1;
        for(int i=0;i<nums.size();i++){
            int counter = 1;
            int curr_num = nums[i];
            while(true){
                 long long square = curr_num * 1LL *curr_num;
                 if(mp.find(square) != mp.end() && mp[square] != -1){
                    counter++;
                    curr_num =square;
                }
                else {
                    mp[square] = -1;
                    break;
                }
            }
            if(counter > 1) 
                res = max(res , counter);
        }
        return res;
    }
};