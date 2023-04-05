class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
//         here we know that in the first testcase 3, 7 , 1, 6
        // if we consider the first to elements 3,7
        // after applying the increase decrease operation the max possible is 5, 5
        // but 7 + 3 = 10 and 10 / 2 = 5 which is the avg
        // there we keep iterating and find the max avg possible
        long long sum = 0;
        long long avg = 0;
        long long maxi = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            avg = ceil((double) sum / (i + 1));
            maxi = max(maxi, avg);
        }
        return maxi;
    }
};