//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        // Only for positive numbers
        // int i = 0, j = 0;
        // int sum = 0, maxi = INT_MIN;
        // while(j < N){
        //     sum += A[j];
        //     if(sum < K)
        //         j++;
        //     else if(sum == K){
        //         maxi = max(maxi, (j - i + 1));
        //         j++;
                
        //     }
        //     else{ 
        //             while(sum > K){
        //                 sum -= A[i];
        //                 i++;
        //             }
        //         }
        //     }
        // if(maxi == INT_MIN)
        //     maxi = 0;
        // return maxi;
        int j = 0;
        unordered_map<int,int> mp;
        int sum = 0, maxi = INT_MIN;
        while(j < N){
            sum += A[j];
            if(sum == K){
                maxi = max(maxi, (j + 1));
            }
            if(mp.find(sum-K)!=mp.end())
                maxi = max(maxi, (j - mp[sum - K]));
            if(mp.find(sum)==mp.end())
                mp[sum] = j;
            j++;
        }
        if(maxi == INT_MIN)
            maxi = 0;
        return maxi;
    }

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends