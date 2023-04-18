class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        unordered_map<int, int> mp;
        int mini = INT_MAX;
        for(int i = 0; i < fronts.size(); i++)
            if(fronts[i] == backs[i])
                mp[fronts[i]]++;
        for(int i = 0; i < fronts.size(); i++)
            if(mp.find(fronts[i]) == mp.end())
                mini = min(fronts[i], mini);
        for(int i = 0; i < backs.size(); i++)
            if(mp.find(backs[i]) == mp.end())
                mini = min(backs[i], mini);
        if(mini == INT_MAX)
            return 0;
        return mini;
    }
};