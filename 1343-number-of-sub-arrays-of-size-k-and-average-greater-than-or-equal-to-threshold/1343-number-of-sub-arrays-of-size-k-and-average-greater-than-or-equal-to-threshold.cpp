class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        float t = (float)threshold;
        int i = 0, j = 0, n = arr.size();
        int sumi = 0, res = 0;
        while(j < n){
            sumi += arr[j];
            if((j - i + 1) == k){
                float avg = sumi/(j - i + 1);
                if(avg >= t)
                    res++;
                sumi-=arr[i];
                i++;
            }
            j++;
        }
        return res;
    }
};