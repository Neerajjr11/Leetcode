class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        if(arr.size() <= 1)
            return false;
        int n = arr.size();
        map<int, int> mp;
        mp[arr[n - 1] * 2] = 1;
        for(int i = n - 2; i >= 0; i--)
            if(mp[arr[i]] == 1)
                return true;
            else{
                mp[arr[i] * 2] = 1;
            }
        mp.clear();
        mp[arr[0] * 2] = 1;
        for(int i = 1; i < n; i++)
            if(mp[arr[i]] == 1)
                return true;
            else{
                mp[arr[i] * 2] = 1;
            }
        return false;
    }
};