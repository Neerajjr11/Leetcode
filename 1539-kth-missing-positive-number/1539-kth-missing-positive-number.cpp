class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int res = 1, n = arr.size();
        int check = k;
        for(int i = 0; i < n; i++){
            if(arr[i] == res){
                res++;
                continue;
            }
            while(res != arr[i]){
                check--;
                if(check == 0)
                    return res;
                res++;
            }
            res++;
        }
        return arr[n - 1] + check;
    }
};