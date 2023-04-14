class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos, neg;
        vector<int>res(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        int i = 0, j = 0, k = 0;
        while(i < pos.size() and j < neg.size()){
            res[k++] = pos[i++];
            res[k++] = neg[j++];
        }
        return res;
    }
};