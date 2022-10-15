class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int counter = 0;
        for(int i = 0; i  < nums.size(); i++){
            if(count(nums.begin(), nums.end(), counter))
                counter++;
            else
                return counter;
        }
        return maxi+1;
    }
};