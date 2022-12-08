class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int maxidx = max_element(nums.begin(), nums.end()) - nums.begin();
        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> res;
        int flag = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == maxi)
                res.push_back(-1);
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] < nums[j]){
                    res.push_back(nums[j]);
                    flag = 1;
                    break;

                }
            }
            if(flag == 0){
                for(int k = 0; k < maxidx+1; k++){
                    if(nums[k] > nums[i]){
                        res.push_back(nums[k]);
                        break;
                    }
                }
            }
            flag = 0;
        }
        return res;
    }
};