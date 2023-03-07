class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
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