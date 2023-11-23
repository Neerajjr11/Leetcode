class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i = 0; i < l.size(); i++){
            vector<int> helper (begin(nums) + l[i], begin(nums) + r[i] + 1);
            sort(helper.begin(), helper.end());
            int diff = helper[1] - helper[0];
            bool flag = true;
            for(int j = 2; j < helper.size(); j++){
                if((helper[j] - helper[j - 1]) == diff)
                    flag = true;
                else{
                    flag = false;
                    break;
                }
            }
            res.push_back(flag);
        }
        return res;
    }
};