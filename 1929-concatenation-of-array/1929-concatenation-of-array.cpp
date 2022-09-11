class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};