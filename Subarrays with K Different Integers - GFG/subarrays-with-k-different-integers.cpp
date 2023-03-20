//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int atmostK(vector<int> &arr, int n, int k){
        int i = 0, j = 0, res = 0;
        int count = 0;
        vector<int> mp(n+1, 0);
        while(j < n){
            if(mp[arr[j]] == 0)
                count++;
            mp[arr[j]]++;
            while(count > k){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0)
                    count--;
                i++;
            }
            res += (j - i + 1);
            j++;
        }
        return res;
    }
    int subarrayCount(vector<int> &arr, int N, int k) {
        // code here
        return atmostK(arr, N, k) - atmostK(arr, N, k - 1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.subarrayCount(arr, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends