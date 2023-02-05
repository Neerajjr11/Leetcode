//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        map<int, int>mp;
        vector<int> res;
        int numdis = 0;
        int i = 0, j = 0;
        while(j < n){
            mp[A[j]]++;
            if(mp[A[j]] == 1)
                numdis++;
            if((j - i + 1) < k)
                j++;
            else if((j - i + 1) == k){
                res.push_back(numdis);
                if(mp[A[i]] > 1)
                    mp[A[i]]--;
                else{
                    mp[A[i]]--;
                    numdis--;
                }
                i++;
                j++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends