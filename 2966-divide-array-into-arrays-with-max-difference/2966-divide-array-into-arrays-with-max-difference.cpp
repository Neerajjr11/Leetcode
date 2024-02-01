class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> res;
        int sz = 0;
        bool flag = true;
        vector<int> helper;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                helper.push_back(nums[0]);
                sz++;
            }
            else if(abs(nums[i] - nums[j]) <= k and sz < 3){
                helper.push_back(nums[i]);
                sz++;
            }else if(sz >= 3){
                j = i;
                res.push_back(helper);
                helper.clear();
                helper.push_back(nums[i]);
                sz = 1;
            }else{
                flag = false;
                break;
            }
        }
        if(!helper.empty())
            res.push_back(helper);
        if(flag == false)
            return {};
        else
            return res;
    }
};