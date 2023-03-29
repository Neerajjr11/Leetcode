class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int run_sum = accumulate(satisfaction.begin(), satisfaction.end(), 0);
        int total_sum = 0;
        for (auto i = 0; i < satisfaction.size(); ++i)
            total_sum += (i + 1) * satisfaction[i];
        for (auto i = 0; run_sum < 0 && i < satisfaction.size(); ++i) {
            total_sum -= run_sum;
            run_sum -= satisfaction[i];
        }
        return total_sum;
    }
};