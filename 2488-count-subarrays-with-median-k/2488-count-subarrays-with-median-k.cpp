
class Solution {
public:
  
    int countSubarrays(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = 1;
        bool contains = false;
        int sumi = 0,res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < k)
                sumi--;
            else if (nums[i] > k)
                sumi++;
            if (nums[i] == k)
                contains = true;
            if (contains)
                res += mp[sumi] + mp[sumi - 1];
            else
                mp[sumi]++;
        }
 
    return res;
    }
};