class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int res = 0;
        int n = time.size();
        vector<int> rem(n, 0);
        unordered_map<int, int>mp;
        for(int i = 0; i < n; i++){
            rem[i] = time[i] % 60;
            mp[rem[i]]++;
        }
        for(auto& i : mp){
            if(i.first == 0 or i.first == 30)
                res += ((long long)(i.second - 1) * (i.second) / 2);
            if(i.first < 30 and mp.count(60 - i.first))
                res += (mp[i.first] * mp[60 - i.first]);
        }
        return res;   
    }
};