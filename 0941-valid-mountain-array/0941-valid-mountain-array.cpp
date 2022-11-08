class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3)
            return false;
        int i = 1;
        while(i < n && (arr[i-1]<arr[i]))
            i+=1;
        if(i==n || i == 1)
            return false;
        while(i<n && (arr[i-1] > arr[i]))
            i+=1;
        return (i==n);
    }
};