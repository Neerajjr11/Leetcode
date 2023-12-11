class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int>mp;
        int special = arr.size() / 4;
        for(auto& x : arr){
            mp[x]++;
            if(mp[x] > special)
                return x;
        }
        return -1;
    }
};