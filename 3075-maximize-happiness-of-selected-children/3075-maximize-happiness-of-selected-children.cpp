class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(rbegin(happiness), rend(happiness));
        long long res = 0;
        int i = 0;
        while(k--){
            happiness[i] = max(happiness[i] - i, 0);
            res += happiness[i++];
        }
        return res;
    }
};