class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxi = arr[0];
        int n = arr.size();
        unordered_map<int, int> mp;
        
        for(int i = 1; i < n; i++){
            maxi = max(arr[i], maxi);
            mp[maxi]++;
            if(mp[maxi] >= k)
                return maxi;
        }
        return maxi;
    }
};