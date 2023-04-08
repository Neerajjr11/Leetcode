class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](auto& a, auto &b){
            return a[1] < b[1];
        });
        int cur = pairs[0][1];
        int res = 1;
        for(int i = 1; i < pairs.size(); i++){
            // b < c
            if(cur < pairs[i][0]){
                cur = pairs[i][1];
                res++;
            } 
        }
        return res;
    }
};