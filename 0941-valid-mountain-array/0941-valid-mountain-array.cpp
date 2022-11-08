class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3)
            return false;
        int stop = 0;
        for(int i = 0;i<n-1;i++){
            if(arr[i] < arr[i+1])
                stop++;
            else
                break;
        }
        int c2 = 0;
        for(int i =stop; i<n-1;i++){
            if(arr[i] <= arr[i+1])
                return false;
            else
                c2++;
        }
        if(stop == n-1)
            return false;
        else if(c2 == n-1)
            return false;
        return true;
    }
};