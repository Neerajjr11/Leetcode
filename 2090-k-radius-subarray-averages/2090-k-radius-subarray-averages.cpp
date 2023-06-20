class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        int windowSize = 2 * k + 1;
        vector<int> pre;
        vector<int> res;
        long long sumi = 0;
        if(k == 0)
            return nums;
        while(j < n){
            sumi += nums[j];
            if((j - i + 1) < windowSize){
                if(j < k)
                    res.push_back(-1);
                j++;
            }
            else if((j - i + 1) == windowSize){
                int avg = sumi / windowSize;
                pre.push_back(avg);
                sumi -= nums[i];
                i++;
                j++;
            }
        }
        int l = 0;
        while(res.size() < n){
            for(; l < pre.size(); l++)
                res.push_back(pre[l]);
            res.push_back(-1);
        }
        return res;
    }
};