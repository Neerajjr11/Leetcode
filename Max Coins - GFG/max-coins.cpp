//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int bsearch(vector<pair<int,int>>& range, int key){
        int l = 0, r = range.size() - 1, idx = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (range[mid].first <= key)
            {
                idx = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        return idx == -1 ? 0 : range[idx].second;
    }
    int maxCoins(int n,vector<vector<int>> &ranges){
        // Code here
        sort(ranges.begin(), ranges.end(), [&](auto& x, auto& y){
           if(x[1] != y[1])
                return x[1] < y[1];
            return x[0] < y[0];
        });
        int res = 0;
        vector<pair<int, int>>range; // contains {end, coins}
        for(auto& x : ranges){
            res = max(res, bsearch(range, x[0]) + x[2]);
            if(range.empty() || range.back().second < x[2])
                range.push_back({x[1], x[2]});
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        Solution ob;
        cout<<ob.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends