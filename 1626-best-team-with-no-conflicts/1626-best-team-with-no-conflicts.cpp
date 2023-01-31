class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int, int>>store;
        vector<int> ans(scores.size(), 0); //An array to hold answers of Longest Non decreasing Subsequence ending at given index
        for(int i = 0; i < scores.size(); i++){
            store.push_back({ages[i], scores[i]});
        }
        sort(store.begin(), store.end());
        int highest = 0;
        for(int i = 0; i < store.size(); i++){
            ans[i] = store[i].second;
            for(int j = 0; j < i; j++){
                if(store[i].second >= store[j].second)
                    ans[i] = max(ans[i], ans[j] + store[i].second);
            }
            highest = max(highest, ans[i]);
        }
        return highest;
    }
    // TC: O(N*N + NLogN)
// SC: (N)
};