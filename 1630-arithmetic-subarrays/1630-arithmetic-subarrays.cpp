class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i = 0; i < l.size(); i++){
            vector<int> helper = nums;
            sort(helper.begin() + l[i], helper.begin() + r[i] + 1, greater<int>());
            int diff = helper[l[i]] - helper[l[i] + 1];
            bool flag = true;
            for(int j = l[i] + 1; j < r[i]; j++){
                if(diff != (helper[j] - helper[j + 1]))
                    flag = false;
            }
            if(flag == true)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};