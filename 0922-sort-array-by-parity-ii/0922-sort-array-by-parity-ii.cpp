class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even, odd;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        int i = 0, j = 0, k = 0;
        nums.clear();
        while(i < even.size() and j < odd.size()){
            nums.push_back(even[i++]);
            nums.push_back(odd[j++]);
        }
        return nums;
    }
};