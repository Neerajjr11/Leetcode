class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int nsum = (n*(n+1))/2;
        int arrsum = 0;
        for(auto i : nums)
            arrsum += i;
        return (nsum - arrsum);
    }
};