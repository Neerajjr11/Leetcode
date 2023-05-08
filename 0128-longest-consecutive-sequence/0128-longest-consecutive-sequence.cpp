class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(begin(nums), end(nums));
        int res = 0;
        for(auto& x : nums){
            // if this is the start of the sequence
            if(!s.count(x - 1)){
                int max_seq = 1;
                while(s.count(x + max_seq)){
                    max_seq++;
                }
                res = max(res, max_seq);
            }
        }
        return res;
    }
};