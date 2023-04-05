class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0, count = 0;
        for(auto& x : nums){
            if(x == 1)
                count++;
            else{
                maxi = max(maxi, count);
                count = 0;
            }
        }
        maxi = max(maxi,count);
        return maxi;
    }
};