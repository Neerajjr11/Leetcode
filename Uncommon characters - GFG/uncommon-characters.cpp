//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_set<char>s1(A.begin(), A.end());
            unordered_set<char>s2(B.begin(), B.end());
            string res = "";
            for(auto& x : s1)
                if(s2.count(x) == 0)
                    res +=x;
            for(auto& x : s2)
                if(s1.count(x) == 0)
                    res +=x;
            sort(res.begin(), res.end());
            if(res == "")
                return "-1";
            return res;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends