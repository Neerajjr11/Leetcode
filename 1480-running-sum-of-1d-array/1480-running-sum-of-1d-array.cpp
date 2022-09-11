class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int>res;
        int n = nums.size();
        int sum = 0;
        res.push_back(nums[0]);
        for (int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                sum +=nums[j];
            }
            res.push_back(sum);
            sum=0;
        }
        return res;
    }
};