//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int res = INT_MAX, i = 0, j = 0, n = S.length();
        unordered_map<char, int> mp;
        while(j < n){
            mp[S[j]]++;
            if(mp.size() == 3){
                while(i < j and mp[S[i]] > 1){
                    mp[S[i]]--;
                    if(mp[S[i]] == 0)
                        mp.erase(S[i]);
                    i++;
                }
                res = min(res, (j - i + 1));
            }
            j++;
        }
        if(res == INT_MAX)
            return -1;
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends