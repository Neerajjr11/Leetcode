class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        int count;
        vector<int> res(n, 0);
        vector<int> pre(n, 0);
        vector<int> suff(n, 0);
        count = boxes[0] - '0';
        for(int i = 1; i < n; i++){
            pre[i] = pre[i - 1] + count;
            count += boxes[i] - '0';
        }
        count = boxes[n - 1] - '0';
        for(int i = n - 2; i >= 0; i--){
            suff[i] = suff[i + 1] + count;
            count += boxes[i] - '0';
        }
        for(int i = 0; i < n; i++)
            res[i] = pre[i] + suff[i];
        return res;
    }
};