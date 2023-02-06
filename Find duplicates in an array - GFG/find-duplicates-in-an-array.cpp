//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int, int> map;
        vector<int> ans;
        bool flag = false;
        for(int i = 0; i < n; i++)
            map[arr[i]]++;
        for(auto i : map){
            if(i.second > 1){
                ans.push_back(i.first);
                flag = true;
            }
        }
        if(flag == true){
            sort(ans.begin(), ans.end());
            return ans;
        }
        else
            return {-1};
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends