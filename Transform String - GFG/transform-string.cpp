//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        int n = A.length();
        int m = B.length();
        if(n != m)
            return -1;
        int count = 0;
        unordered_map<char, int> mp;
        for(int i = 0; i < n; i++){
            mp[A[i]]++;
            mp[B[i]]--;
        }
        for(int i = 0; i < n; i++)
            if(mp[A[i]] != 0 || mp[B[i]] != 0)
                return -1;
       int j = n - 1;
        for(int i = n - 1; i >= 0; i--)
            if(A[i] != B[j])
                count++;
            else
                j--;
        return count;
        
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends