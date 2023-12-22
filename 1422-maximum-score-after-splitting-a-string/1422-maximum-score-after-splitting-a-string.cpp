class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        vector<int> prefixSum(n, 0);
        if(s[0] == '0')
            prefixSum[0] = 1;
        for(int i = 1; i < s.size(); i++)
            if(s[i] == '0')
                prefixSum[i] = prefixSum[i - 1] + 1;
            else
                prefixSum[i] = prefixSum[i - 1];
        vector<int> suffixSum(n, 0);
        if(s[n - 1] == '1')
            suffixSum[n - 1] = 1;
        for(int i = n - 2; i >=0; i--)
            if(s[i] == '1')
                suffixSum[i] = suffixSum[i + 1] + 1;
            else
                suffixSum[i] = suffixSum[i + 1];
        int res = 0;
        for(int i = 0; i < n - 1; i++)
            res = max(res, (prefixSum[i] + suffixSum[i + 1]));
        return res;
    }
};