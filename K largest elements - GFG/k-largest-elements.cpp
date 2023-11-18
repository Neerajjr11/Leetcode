//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        // to retain the order instead of using min heap we will use max heap and since it stores max elements on top
        // we will keep a loop until k and get the top k elements in the heap and put it in the array
        vector<int> res(k, 0);
        priority_queue<int> pq;
        for(int i = 0 ; i < n; i++)
            pq.push(arr[i]);
        int i = k - 1;
        while(k--){
            // cout << pq.top()<<" ";
            res[i--] = pq.top();
            pq.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends