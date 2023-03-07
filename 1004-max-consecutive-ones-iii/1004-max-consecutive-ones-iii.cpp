class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // count the number of zeros in the var sliding window
        // if the zeros are less than or equal to k then compare the window size with maximum window
        // size seen till now and output the max window size with at most k zeros
        int res = 0;
        int i = 0, j = 0, n = nums.size(), countzero = 0;
        while(j < n){
            if(nums[j] == 0)
                countzero++;
            if(countzero <= k){
                res = max(res, j - i + 1);
                j++;
            }
            else{
                while(countzero > k){
                    if(nums[i] == 0)
                        countzero--;
                    i++;
                }
                j++;
            }
        }
        return res;
    }
};