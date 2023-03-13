class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());
        unordered_map<int, int>mp;
        for(auto p : passengers)
            mp[p]++;
        int i = 0, j = 0, cap = 0, res = 0;
        for(int i = 0; i < buses.size(); i++){
            int cap = 0;
            while (j < passengers.size() and cap < capacity and passengers[j]<=buses[i]){
                if(mp[passengers[j] - 1] == 0)
                    res = passengers[j] - 1;
                mp[passengers[j]]++;
                j++;
                cap++;
            }
            if(cap < capacity){
                if(mp[buses[i]] == 0)
                res = buses[i];
            }
        }
        
        return res;
    }
};