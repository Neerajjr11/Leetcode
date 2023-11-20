class Solution {
public:
    void solve(vector<int>& arr, int k, int index){
        if(arr.size() == 1)
            return;
        index = (index + k) % arr.size();
        arr.erase(arr.begin()+index);
        solve(arr, k, index);
    }
    int findTheWinner(int n, int k) {
        // since 0 indexed arr;
        k--;
        vector<int>arr;
        for(int i = 1; i <= n; i++)
            arr.push_back(i);
        solve(arr,k,0);
        return arr[0];
    }
};