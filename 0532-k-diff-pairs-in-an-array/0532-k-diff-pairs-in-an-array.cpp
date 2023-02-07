class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto i : nums)
            mp[i]++;
        int count = 0;
        for(auto i : mp){
            if(k == 0){
                if(i.second > 1)
                    count++;
            }else{
                if(mp.find(i.first + k) != mp.end())
                    count++;
            }
        }
        return count;
    }
};