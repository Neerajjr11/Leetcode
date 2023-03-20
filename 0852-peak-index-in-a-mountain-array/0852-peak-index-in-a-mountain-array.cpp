class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 1;
        int res = 0;
        while(i < n && (arr[i-1] < arr[i]))
            i += 1;
        return i - 1;
    }
};