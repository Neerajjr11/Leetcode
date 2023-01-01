class Solution {
public:
    int minimumPartition(string s, int k) {
        long long partition = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (partition * 10 + (s[i] - '0') <= k) {
                partition = partition * 10 + (s[i] - '0');
            }
            else {

                if (partition == 0 || partition > k) {

                    return -1;
                }
                else {

                    ans++;

                    partition = s[i] - '0';
                }
            }
        }
        if (partition > 0 && partition <= k) {

            ans++;
        }
        return ans;
    }
};