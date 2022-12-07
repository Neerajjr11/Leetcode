class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(begin(nums), end(nums));
        int max_sequence_length = 0;
        for(auto &current_num : set){
            if(set.count(current_num - 1)) continue;
            int current_sequence_length = 1;
            while(set.count(current_num + current_sequence_length))
                current_sequence_length++;
            max_sequence_length = max(max_sequence_length, current_sequence_length);
        }
        return max_sequence_length;
    }
};