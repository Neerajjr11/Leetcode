class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        unordered_map<int, int> mp;
        int mini = INT_MAX;
        for(int i = 0; i < fronts.size(); i++)
            if(fronts[i] == backs[i])
                mp[fronts[i]]++;
        for(auto& x : fronts)
            if(mp.count(x) == 0)
                mini = min(mini, x);
        for(auto& x : backs)
            if(mp.count(x) == 0)
                mini = min(mini, x);
        if(mini == INT_MAX)
            return 0;
        return mini;
    }
};