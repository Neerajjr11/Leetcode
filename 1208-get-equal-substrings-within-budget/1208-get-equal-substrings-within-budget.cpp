class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        // get the difference, then same as maxium subarray size with sum k
        int n = s.size();
        vector<int> diff(n);
        for (int i = 0; i < n; ++i) {
            diff[i] = abs(s[i] - t[i]);
        }
        int start = 0, end = 0, currentCost = 0, maxLength = 0;
        while (end < n) {
            currentCost += diff[end];
            while (currentCost > maxCost) {
                currentCost -= diff[start];
                start++;
            }
            maxLength = max(maxLength, end - start + 1);
            end++;
        }
        return maxLength;
    }
};