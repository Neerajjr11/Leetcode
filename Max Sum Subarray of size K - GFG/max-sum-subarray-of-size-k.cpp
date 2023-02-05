//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i = 0, j = 0;
        long long sumi = 0;
        long long maxi = INT_MIN;
        while(j < N){
            sumi += Arr[j];
            if ((j - i + 1) < K)
                j++;
            else if((j - i + 1) == K){
                maxi = max(maxi, sumi);
                sumi -= Arr[i];
                j++;
                i++;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends