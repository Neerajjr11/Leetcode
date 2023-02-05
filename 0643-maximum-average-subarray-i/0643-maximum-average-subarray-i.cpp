class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avgmax = INT_MIN;
        double sumi = 0;
        int i = 0, j = 0;
        while(j < nums.size()){
            sumi += nums[j];
            if((j - i + 1) < k)
                j++;
            else if((j - i + 1) == k){
                double avg = sumi / k;
                // cout<<avg<<" ";
                avgmax = max(avgmax, avg);
                sumi -= nums[i];
                i++;
                j++;
            }
        }
        return avgmax;
    }
};