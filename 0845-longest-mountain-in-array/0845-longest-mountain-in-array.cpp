class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if(n < 3)
            return 0;
        int up = 0, down = 0;
        int maxi = 0;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] < arr[i + 1]){
                while(i + 1 < n && arr[i] < arr[i + 1]){
                    up++;
                    i++;
                }
                while(i + 1 < n && arr[i] > arr[i + 1]){
                    down++;
                    i++;
                }
                if(up != 0 and down != 0)
                    maxi = max(maxi, up + down + 1);
                up = 0;
                down = 0;
                i--;
            }
        }
        return maxi;        
    }
};