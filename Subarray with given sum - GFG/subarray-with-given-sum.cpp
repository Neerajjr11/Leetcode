//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> res;
        long long i = 0, j = 0;
        long long sumi = 0;
        while(j < n){
            sumi += arr[j];
            // cout << sumi<<" ";
            if(sumi == s){
                if(i <= j){
                    res.push_back(i + 1);
                    res.push_back(j + 1);
                    return res;
                }
            }else{
                while(sumi > s){
                    sumi -= arr[i];
                    i++;
                    if(sumi == s){
                        if(i <= j){
                            res.push_back(i + 1);
                            res.push_back(j + 1);
                            return res;
                        }
                    }
                }
            }
            j++;
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends