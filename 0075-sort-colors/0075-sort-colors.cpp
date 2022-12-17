class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int k = 3;
        int count[k];
        for(int i = 0; i < k; i++)
            count[i] = 0;
        for(int i = 0; i < n; i++)
            count[nums[i]]++;
        int index = 0;
        for(int i = 0; i < k; i++){
            for(int j = 0; j < count[i]; j++){
                nums[index] = i;
                index++;
            }
        }
    }
};