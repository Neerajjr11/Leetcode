class Solution {
public:
    int maxJump(vector<int> &stones){
        int max_jumps = stones[1] - stones[0];
        int total;
        for(int i = 2; i < stones.size(); i++){
            total = abs(stones[i] - stones[i - 2]);
            max_jumps = max(max_jumps, total);
        }
        return max_jumps;
    }
};