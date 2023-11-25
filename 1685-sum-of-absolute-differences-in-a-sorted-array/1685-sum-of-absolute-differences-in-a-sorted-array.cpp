class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n + 1);
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++)
            prefix[i] = nums[i] + prefix[i - 1];
        vector<int>suffix(n+1);
        suffix[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--)
            suffix[i] = nums[i] + suffix[i + 1];
        vector<int>res;
        for(int i = 0; i < n; i++){
            if(i != 0 and i != n - 1)
                res.push_back((abs(((i*nums[i]) - prefix[i - 1])) + abs(((n - i - 1) *nums[i]) - suffix[i + 1])));
            else if(i == 0){
                res.push_back(abs((n - i - 1) * nums[i] - suffix[i + 1]));
            }else if(i == n - 1){
                res.push_back(abs(i * nums[i] - prefix[i - 1]));
            }
        }
        return res;
    }
};