class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int mindiff = INT_MAX;
        int n = arr.size(), idx = 0, i;
        // if(k == n)
            // return arr;
        for(i = 0; i < n; i++){
            // cout<<mindiff<<"  ";
            if(mindiff > abs(x-arr[i])){
                mindiff = abs(x-arr[i]);
                idx = i;
            }
        }
        
        cout<<idx<<" ";
        vector<int> res;
        res.push_back(arr[idx]);
        k--;
        int diff_left, diff_right;
        int left_flag = 0, right_flag = 0;
        int left = idx - 1, right = idx + 1;
        if(left < 0){
            diff_left = INT_MAX;
            left_flag = 1;
            left = 0;
        }
        if(right > n - 1){
            diff_right = INT_MAX;
            right = n - 1;
            right_flag = 1;
        }
        while(k--){
            if(left_flag == 0)
                diff_left = abs(x - arr[left]);
            if(right_flag == 0)
                diff_right = abs(x - arr[right]);
            if(left_flag == 0 and diff_left <= diff_right){
                res.push_back(arr[left]);
                left --;
                if(left < 0){
                    diff_left = INT_MAX;
                    left_flag = 1;
                    left = 0;
                }
            }else if(right_flag == 0){
                res.push_back(arr[right]);
                right++;
                if(right > n - 1){
                    diff_right = INT_MAX;
                    right_flag = 1;
                    right = n - 1;
                }
            }
        }
        sort(begin(res), end(res));
        return res;
    }
};